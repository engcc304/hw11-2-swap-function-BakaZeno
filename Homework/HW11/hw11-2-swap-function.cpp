/*
    ผู้ใช้กรอกชื่อและอายุเข้าไปในระบบจำนวน 2 ครั้ง โดยให้คุณทำการสลับอายุของคน 2 คนนี้ผ่านฟังก์ชันที่คุณเขียนขึ้นมา เช่น นาย ก อายุ 31 ปี และ นาย ข อายุ 20 ปี หลังจากเรียกฟังก์ชันการสลับค่าแล้ว นาย ก จะอายุ 20 ปี และนาย ข จะอายุ 31 ปี

    Test case:
        Input A
        Name : 
            Yorn
        Age : 
            31
        Input B
        Name : 
            Thane
        Age : 
            20
    Output:
        ** RESULT **
        Name: Yorn (31)
        Name: Thane (20)

        ** SWAP AGE **
        Name: Yorn (20)
        Name: Thane (31)

*/

#include <stdio.h>

void age(int *A,int *B){
    if(*A>*B){
        int defaultA = *A;
        *A = *B;
        *B = defaultA;
    }
}

int main(){

    char nameA[50];
    char nameB[50];
    int A;
    int B;

    printf("Input A\n");
    printf("Name :\n");
    scanf("%s",nameA);
    printf("Age :\n");
    scanf("%d",&A);

    printf("Input B\n");
    printf("Name :\n");
    scanf("%s",nameB);
    printf("Age :\n");
    scanf("%d",&B);

    printf("** RESULT **\n");
    printf("Name: %s (%d)\n",nameA,A);
    printf("Name: %s (%d)\n",nameB,B);

    age(&A,&B);

    printf("** SWAP AGE **\n");
    printf("Name: %s (%d)\n",nameA,A);
    printf("Name: %s (%d)\n",nameB,B);

    return 0;
}