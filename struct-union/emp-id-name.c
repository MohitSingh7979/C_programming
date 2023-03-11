#include<stdio.h>

struct emp
{
  int emp_id;
  char emp_name[20];
  short s;
  char c;
};

int main()
{
  struct emp e;
  
  /* inserting employee id and name */
  printf("Enter the employee Id :");
  scanf("%d", &e.emp_id);

  printf("Enter the employee Name:");
  scanf("%s", e.emp_name);

  /* prining employee id and name */
  printf("Employee   ID : %d\n", e.emp_id);
  printf("Employee Name : %s\n", e.emp_name);

  /* prining address of employee id and name */
  printf("Address of Structure emp : %p\n", &e); 
  printf("Address of Employee ID   : %p\n", &e.emp_id); 
  printf("Address of Employee Name : %p\n", e.emp_name); 

  /* prining size of employee id and name */
  printf("Memory of Structure emp   : %ld\n", sizeof(e)); 
  printf("Memory of Structure short : %ld\n", sizeof(short)); 
  printf("Memory of Structure char  : %ld\n", sizeof(char)); 
  printf("Memory of Employee ID     : %ld\n", sizeof(e.emp_id)); 
  printf("Memory of Employee Name   : %ld\n", sizeof(e.emp_name)); 

  return 0;
}
