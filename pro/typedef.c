#include <stdio.h>
#include <string.h>
 
typedef struct student 
{
  int room_no;
  char name[20];
  float  occupants;
} status;
 
int main() 
{
  status record;
  record.id=1;
  strcpy(record.name, "Raju");
  record.occupants = ;
  printf(" Id is: %d \n", record.id);
  printf(" Name is: %s \n", record.name);
  printf(" Percentage is: %f \n", record.occupants);
  return 0;
}
