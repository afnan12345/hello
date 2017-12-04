     #include<stdio.h>
     int main()
 {
     int num,sum=0,rem,temp;
     printf("\nEnter the number to check armstromg number");
     scanf("%d",&num);
     
      temp=num;
      while(temp!=0)
       {
           rem=temp%10;
           sum=(rem*rem*rem)+sum;
           temp=temp/10;
       }
           if(num==sum)
       {
            printf("\nIt is an armstrong number");
       }
         else
       {
            printf("\nIt is not an armstrong number");
       }
       return 0;
}
     
