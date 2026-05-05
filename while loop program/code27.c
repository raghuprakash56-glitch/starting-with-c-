#include <stdio.h>
#include <math.h>

int main() {
    int num,a=0,i,e=0,que=0,rem=0,c=0,sum=0,d=0,count=0,ans=0;
    
    scanf("%d",&num);
    ans=num;
    c=num;
    if(num>=0){
    
    while(ans!=0)
    {
        ans=ans/10;
        count++;
        
    }
        while(num!=0)
    {
        rem=num%10;
        d=pow(rem,count);
        sum=sum+d;
        num=num/10;
        
    }
    if(c==sum)
    {
        printf("%d is a narcissistic number",c);
    }
    else{
         printf("%d is a not narcissistic number",c);
    }
    }
    
    else{
        printf("invalid");
    }
    
    return 0;
}
