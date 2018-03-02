#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

struct node {
   char* name;
   int age;
   int number;
   int* marks;
   int number_marks;
   struct node *next;
};

struct node *head = NULL;
struct node *current = NULL;


void printList() {
   struct node *ptr = head;

	

   while(ptr != NULL) {
      printf("number  - %d\n, name- %s\n ",ptr->number,ptr->name);
      printf("age-%d\n",ptr->age);
  
      for(int i=0;i<ptr->number_marks;i++){
		printf("%d\n",ptr->marks[i]);

	}
      ptr = ptr->next;
   }
	
   
}
void printListcurrent(int number) {
   struct node *ptr = head;

	

   while(ptr != NULL) {
	if(ptr->number==number){
      printf("number  - %d\n, name- %s\n ",ptr->number,ptr->name);
      printf("age-%d\n",ptr->age);
  	}
      for(int i=0;i<ptr->number_marks;i++){
		printf("%d\n",ptr->marks[i]);

	}
      ptr = ptr->next;
   }
	
   
}

void insertFirst() {
  int number_;
  int age_;
   char name_[50];
   printf("Add student name\n");
   scanf("%s",name_);
	printf("add student number\n");
	scanf("%d",&number_);
	printf("add student age\n");
	scanf("%d",&age_);
   struct node *link = (struct node*) malloc(sizeof(struct node));
	
   link->number = number_;
   link->name = (char*)malloc(sizeof(name_));
strcpy(link->name,name_);
//   link->name = name_;
   link->age = age_;
 
    printf("vavedete broq na ocenkite to student %s \n",link->name);
    scanf("%d",&link->number_marks);
    printf("vavedete  ocenkite\n");
       link->marks = (int*)malloc(sizeof(link->number_marks));
	for(int i=0;i< link->number_marks;i++){
		scanf("%d",&link->marks[i]);
		
	}
	

   link->next = head;
	

   head = link;
}


struct node* deleteFirst() {


   struct node *tempLink = head;
	

   head = head->next; 	

   return tempLink;
}


bool isEmpty() {
   return head == NULL;
}

int length() {
   int length = 0;
   struct node *current;
	
   for(current = head; current != NULL; current = current->next) {
      length++;
   }
	
   return length;
}





struct node* delete(int number) {


   struct node* current = head;
   struct node* previous = NULL;
	

   if(head == NULL) {
      return NULL;
   }


   while(current->number != number) {


      if(current->next == NULL) {
         return NULL;
      } else {

         previous = current;

         current = current->next;
      }
   }


   if(current == head) {

      head = head->next;
   } else {

      previous->next = current->next;
   }    
	
   return current;
}

struct node* addmark(int number)
{
	int num_marks;
    struct node* current = head;

    while (current != NULL)
    {
       if (current->number == number){
		printf("How many marks would you like to add?\n");
         	scanf("%d",&num_marks);
		current->number_marks+=num_marks;
		current->marks = realloc(current->marks, num_marks * sizeof (int));
		for(num_marks;num_marks<current->number_marks;num_marks++){
			    
			scanf("%d",&current->marks[num_marks]);

		}
     }
       current = current->next;
    }
	return current;
}
void  write_to_file(){
	char file[50];
	printf("write name of the file\n");
	scanf("%s",file);
	FILE *f = fopen(file, "w");
if (f == NULL)
{
    printf("Error opening file!\n");
    exit(1);
}
struct node *ptr = head;

	

   while(ptr != NULL) {
      fprintf(f,"%d\n%s\n ",ptr->number,ptr->name);
      fprintf(f,"%d\n",ptr->age);
  
      for(int i=0;i<ptr->number_marks;i++){
		fprintf(f,"%d\n",ptr->marks[i]);

	}
      ptr = ptr->next;
   }


fclose(f);


}
void read_from_file(){



}



int main() {
int choice;
char name[50];

int number;
int age;


do{
	
        printf("Menu\n\n");
  	printf("1. add new student\n");
	printf("2. delete student\n");
	printf("3. introduce marks\n");
	printf("4. print student report\n");
	printf("5. print  all student report\n");
	printf("6. save to file\n");
	printf("7. print student report\n");
	printf("8. exit\n");
	
        scanf("%d",&choice);
 
        switch(choice)
        {
            case 1:

		
		
		insertFirst();

                break;
            case 2:   	
			printf("add student number\n");
		scanf("%d",&number);
			delete(number);

		
		
                break;
	    case 3:   
				printf("add student number\n");
		scanf("%d",&number);
			addmark(number);
	     
                break;
	    case  4:
		printf("add student number\n");
	     	scanf("%d",&number);
		printf("Printing student report\n");
		printListcurrent(number);
                break;	
	       case  5:
			printf("Printing students report\n");
		  printList();
	     
                break;
		 case  6:
			printf("6. save to file\n");
			write_to_file();
                break;
		case   7:
		

		break;
	 case 8: printf("Quitting program!\n");
               
                break;
            default: printf("Invalid choice!\n");
                break;
        }
 
    } while (choice != 8);

 
	

  
   printList();
return 0;

}
