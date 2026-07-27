#include <stdio.h>
#include <stdbool.h>
int main (){
int arr[6]= {1,2,3,5,8,9};
bool Valid= true;
for (int i=0 ; i<4 && Valid;i++){
    if (arr[i]+arr[i+1]==arr[i+2]){
        Valid= true;
    }else {
        Valid= false ;
    }
}
if (Valid==true){
    printf("Valid");
}else{
    printf("inValid");
}

    return 0;
}