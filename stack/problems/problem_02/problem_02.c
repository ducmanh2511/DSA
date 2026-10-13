#include <stack.h>
#include <string.h>
#define MAX_LENGTH 1000
int main(){
    char str [MAX_LENGTH];
    scanf("%s",str);
    char temp [MAX_LENGTH];
    Stack stack;
    Stack_init(&stack);
    int value = 0;
    int count = 0;
    for(int i=0;str[i]!='\0';i++){
       count = 0;
       if(str[i]!= '\\'){
        Stack_push(&stack,str[i]);
       }
       else{
       while(!Stack_isEmpty(&stack)){
        value = (char)Stack_pop(&stack);
        if(value == '/'){
            break;
            }
            else{
                temp[count++] = (char)value;
            }
        }
       
        for(int i=0;i<count;i++){
            Stack_push(&stack,temp[i]);
        }
}
    }
   count = 0;
while(!Stack_isEmpty(&stack)){
    temp[count++] = (char)Stack_pop(&stack);
}
for(int i=count-1;i>=0;i--){
    printf("%c",temp[i]);
}
return 0;
}








