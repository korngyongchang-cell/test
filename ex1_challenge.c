#include <stdio.h>
int main(){
    int h1,m1,s1,h2,m2,s2;
    
    printf ("enter h1: ");
    scanf ("%d",&h1);
    printf ("enter m1: ");
    scanf ("%d",&m1);
    printf ("enter s1: ");
    scanf ("%d",&s1);
    printf ("enter h2: ");
    scanf ("%d",&h2);
    printf ("enter m2: ");
    scanf ("%d",&m2);
    printf ("enter s1: ");
    scanf ("%d",&s2);

    // if (h1>h2){
    //     printf("Time 1 is greater!");
    // }
    // else if(h1<h2){
    //     printf("Time 2 is greater!");
    // }
    // else if(m1>m2){
    //     printf("Time 1 is greater!");
    // }
    // else if(m1<m2){
    //     printf("Time 2 is greater!");
    // }
    // else if(s1>s2){
    //     printf("Time 1 is greater!");
    // }
    // else if(s1<s2){
    //     printf("Time 2 is greater!");
    // } 
    // else{
    //     printf("Both times are the same!");
    // }   

    if(h1>h2 || (h1==h2 && m1>m2) || (h1==h2 && m1==m2 && s1>s2)) printf("Time 1 is greater!");
    else if(h1<h2 || (h1==h2 && m1<m2) || (h1==h2 && m1==m2 && s1<s2)) printf("Time 2 is greater!");
    else printf("Both times are the same!");

}