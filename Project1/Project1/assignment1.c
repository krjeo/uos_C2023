# include <stdio.h>

int main(void) {

    char name[13]; // 입력할 이름을 저장할 변수를 string으로 초기화
    //                4글자 이름까지 넣을 수 있도록 13비트를 할당함
    int birthday; // 입력할 생일을 저장할 변수를 int형으로 초기화
    int stud_id; // student id. 입력할 학번을 저장할 변수를 int형으로 초기화
    char dept[31]; // department. 입력할 학과를 저장할 변수를 string으로 초기화
    //                우리 대학에서 가장 긴 학과 이름까지 넣을 수 있도록 31비트를 할당함

    printf("본인의 이름을 입력하세요: ");
    scanf_s("%s", name, sizeof(name)); // string형으로 초기화한 name 변수에 입력한 이름을 할당함
    //                                   string형 입력이므로 %s를 사용
    getchar(); // 혹시 모를 입력 버퍼 방지용 getchar()

    printf("생일을 입력하세요: "); // scanf 후 자동 줄바꿈을 고려해 \n을 넣지 않음
    scanf_s("%d", &birthday); // int형으로 초기화한 birthday 변수에 입력한 생일을 할당함
    //                           int형 입력이므로 %d를 사용
    getchar();

    printf("학번을 입력하세요: ");
    scanf_s("%d", &stud_id); // int형으로 초기화한 stud_id 변수에 입력한 학번을 할당함
    getchar();

    printf("학과를 입력하세요: ");
    scanf_s("%s", dept, sizeof(dept)); // 마지막으로, string형으로 초기화한 dept 변수에 입력한 학과를 할당함
    getchar();

    printf("\n- 이름 : %s", name); // 보기 좋게 입력 부분과 한 줄 더 띄어주었음
    printf("\n- 생년월일 : %d", birthday); // 각 변수에 할당된 입력을 가져와 한 줄씩 출력
    printf("\n- 학번 : %d", stud_id);
    printf("\n- 학과명 : %s", dept);

}

/*
코드 실행 결과:
본인의 이름을 입력하세요: 김정현
생일을 입력하세요: 20020103
학번을 입력하세요: 2021480002
학과를 입력하세요: 인공지능학과
- 이름 : 김정현
- 생년월일 : 20020103
- 학번 : 2021480002
- 학과명 : 인공지능학과
*/