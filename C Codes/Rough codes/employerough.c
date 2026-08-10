#include <stdio.h>

struct office{
    char name[50];
    char gender[10];
    char depart[50];
    char desig[30];
    float pay;
};
     int main(){
         int n,i;
         printf("Enter the number of Employees- ");
         scanf("%d",&n);
         struct office emp[n];
         for(i=0;i<n;i++){
             printf("\nEnter details of Employee %d\n", i + 1);
             
             printf("Name- ");
             scanf("%s",emp[i].name);
             
             printf("Gender- ");
             scanf("%s",emp[i].gender);
             
             printf("Department- ");
             scanf("%s",emp[i].depart);
             
             printf("Designation- ");
             scanf("%s",emp[i].desig);
             
             printf("Pay- ");
             scanf("%f", &emp[i].pay);
             
             }
             printf("Employee Details");
             for(i=0;i<n;i++)
             {
                 printf("Emplyee- %d",i+1);
                  printf("Name- %s",emp[i].name);
                    float gp = emp[i].pay+(0.25*emp[i].pay)+(0.7*emp[i].pay);
                    printf("Gross Pay- %.2f",gp);
                   
                 
             }
    
     return 0;
}