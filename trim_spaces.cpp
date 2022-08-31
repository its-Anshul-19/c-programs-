#include<cstring>
void trimSpaces(char input[]) {
    // Write your code here
    // for(int i=0; input[i]!='\0'; i++){
    //     if(input[i]==c1){
    //         input[i]=c2;
    //     }
    // }
    
   // int len = strlen(input);
     int i = 0, j = 0;
    
    while (input[i])
    {
        if (input[i] != ' '){
           input[j++] = input[i];    
        }
        
        i++;
    }
    
    input[j] = '\0';
}
