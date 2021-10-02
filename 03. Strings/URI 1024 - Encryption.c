#include <stdio.h>
#include <string.h>
void reverse(char word[],int len){
    char temp;
    int i;
    for (i=0;i<len/2;i++){
            temp = word[i];
            word[i] = word[len-i-1];
            word[len-i-1] = temp;
    }
}
int main (){
    int N,i,j,len;
    char M[1000];
    scanf("%d ",&N);
    for(i=0; i<N; i++){
        gets(M);
        len = strlen(M);
        for(j=0; j<len; j++){
            if((M[j]>='a' && M[j]<='z') || (M[j]>='A' && M[j]<='Z')){
                M[j] = M[j] + 3;
            }
        }
        reverse(M,len);
        for(j=len/2; j<len; j++){
                M[j] = M[j] - 1;
        }
        printf("%s\n",M);
    }
    return 0;
}
