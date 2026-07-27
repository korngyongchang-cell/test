#include <stdio.h>
#include <stdbool.h>
int main (){
int arr[6]= {1,2,3,3,2,1};
bool Valid= true;
for (int i=0 ; i<3 ;i++){
    if (arr[i]!=arr[5-i]){
        Valid=false;
    }

}
if (Valid==true){
    printf("true");
}else{
    printf("false");
}

    return 0;
}