#include <stdio.h>
#include <stdlib.h>

/*
    Data Structure: Insertion Sort
        - Lab: Homework 1
        - Type: Array based
        - By: Tuguldursaikhan
        - Contact: 16B1SEAS0935@stud.num.edu.mn
*/

int main(){
    int n,i,j,temp;
    //Garaas utga avah uildel
    printf("Garaas heden too oruulj erembeleh ve?\n");
    scanf("%d", &n);
    int a[n];
    printf("Garaas erembeleh utguudaa oruulna uu!\n");
    for(i=0;i<n;i++)
        scanf("%d", &a[i]);

    //Bubble sort
    //3 2 1 0
    for(i=1;i<=n;i++){
        for(j=0;j+i<n;j++){
            if(a[j]>a[j+1]){
                temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
            }
        }
    }

    //Utga hevleh uidlel
    for(i=0;i<n;i++)
        printf("%d ", a[i]);

    return 0;
}
