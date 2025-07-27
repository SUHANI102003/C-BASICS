#include<stdio.h>
#include<string.h>
//--------------------------------------------
//                 STRINGS
//---------------------------------------------
//               DECLARATION
//---------------------------------------------
/*
int main(){
//char name[] = {'S', 'U', 'H', 'A', 'N', 'I', '\0'}; // '\0' = null character - terminates string
// char name[] = "SUHANI";
 char name[] = "SUHANI JAIN";
printf("%s", name);
  return 0;
}
  */

 //-------------------------------------------
 //create a string firstname & lastname to store details of user & print all the characters using a loop
 //--------------------------------------------
/*
 void printString(char arr[]);

 int main(){
  char firstName[] = "SUHANI";
  char secondName[] = "JAIN";

  printString(firstName);
  printString(secondName);
  return 0;
 }

 void printString(char arr[]){
  for(int i=0; arr[i] != '\0' ;i++){
    printf("%c", arr[i]);
  }
  printf("\n");
 }
  */

//----------------------------------------
//Ask the user to enter their firstname & print
//it back to them.
// Also try this with their full name.
//----------------------------------------
/*
int main(){

// PART 1
// char firstName[50];
// scanf("%s", firstName);
// printf("Your name is %s", firstName);

// PART 2
char fullName[100];
scanf("%s", fullName); // SUHANI JAIN
printf("Your full name is %s", fullName); // will only print SUHANI
// so, scanf cannot input multi-word st
  return 0;
}
  */

  //------------------------------------
  //   puts(str) , fgets(str, n, file), gets(str)
  //------------------------------------
  /*
  int main(){
    char str[100];
    //gets(str);   // inputs string - but not used 
    fgets(str, 100, stdin); // adds a new line at end // accepts multi word string
    puts(str);  // output string
    return 0;
  }
    */

//-----------------------------------------
// POINTER DECLARATION OF STRING
//--------------------------------------
/*
int main(){
  char *canChange = "Hello World";  // can be reinitialized
  puts(canChange);
  canChange = "Hello";
  puts(canChange);

  char cannotChange = "hello world";
  puts(cannotChange);
  cannotChange = "Hello";  //error
  puts(cannotChange);
  return 0;
}
  */

  //-----------------------------------------
  // WAP that inputs user name & prints its length.
  //-------------------------------------------------
  /*
  int countLength (char arr[]);

  int main(){
  char name[100];
  fgets(name, 100, stdin); // SUHANI\0  == length to be printed = 7-1 = 6
    printf("length is : %d", countLength(name));
    return 0;
  }

   int countLength (char arr[]){
    int count =0;
    for (int i=0; arr[i] != '\0'; i++){
      count++;
    }
    return count-1;
   }
    */

    //----------------------------------
    // Standard Library Functions
    //----------------------------------
    /*
    //strlen();
    int main(){
      char name[] = "suhani";
      int length = strlen(name);
      printf("length is : %d",length); // excludes \0 // unsigned long output type

      return 0;
    }
    
    // strcpy();
    int main(){
      char str1[] = "hello";  // new
      char str2[] = "world";  // old
      strcpy(str1, str2);
      puts(str1);
      return 0;
    }
      

    // strcat();
    int main(){
      char str1[100] = "hello ";  // make sure that the size is big
      char str2[] = "world";  
      strcat(str1, str2);
      puts(str1);
      return 0;
    }
      

       // strcmp();
       // 0 => equal
       //positive => greater
       //negative => less
    int main(){
      char str1[] = "hello"; 
      char str2[] = "world";  
      int comp = strcmp(str1, str2);
      printf("%d", comp);   // -1 ==> str1<str2
      return 0;
    }
      */

//-----------------------------------------
// TAKE A STRING INPUT FROM USER USING %c
//-----------------------------------------
/*
int main(){
  char str[100];
  char ch;
  int i=0;

  while(ch!='\n'){
    scanf("%c", &ch);
    str[i] = ch;
    i++;
  }
  str[i] = '\0';
  puts(str);
}
  */

//-----------------------------------------------------
//SALTING
// Find the salted form of a password entered by user if the salt is '123'& added at the end.
//----------------------------------------------------
/*
void salting(char password[]);
int main(){
  char password[100];
  scanf("%s", &password);  // 'test'
  salting(password);
    
}

void salting(char password[]){
  char salt[] = "123";
  char newPass[200];

  strcpy(newPass, password); // newPass = 'test'
  strcat(newPass, salt);    // "test" + "123"
  puts(newPass);
}
  */

  //-------------------------------------------
  //Write a func named slice, which takes a string & returns a sliced string from index n to m.
  //--------------------------------------------------
/*
  void slice(char str[], int n, int m);

  int main(){
    char str[100];
    scanf("%s", &str);
    slice(str,2,5);
    }

  void slice(char str[], int n, int m){ // n & m are valid values
    char sliced[100];
    int j=0;
    for (int i=n; i<=m ; i++, j++){
      sliced[j] = str[i];
    }
    sliced[j] = '\0';
    puts(sliced);
  }
    */

    //--------------------------------------------
    // Write a function to count the occurance of vowels in a string
    //--------------------------------------------
/*
    int countVowel(char str[]);

    int main(){
      char str[100];
    scanf("%s", &str);
    printf("Vowels are: %d",countVowel(str));
    }

    int countVowel(char str[]){
      int count =0;
      for(int i=0;str[i] != '\0'; i++){
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
          count++;
        }
      }
      return count;
    }

    */
   //---------------------------------------------------
   // Check if a given character is present in a string of not
   //---------------------------------------------------
   /*
    void checkChar(char str[], char ch);

    int main(){
    char str[100];
    char ch = 'a';
    printf("Enter the string\n");
    scanf("%s", &str);
    checkChar(str,ch);
    }

    void checkChar(char str[], char ch){
      
      for(int i=0;str[i] != '\0'; i++){
        if(str[i] == ch){
          printf("YES, the character %c is present in the string.\n", ch);
          return;
        }
      }
     printf("Character is not present\n");
    }
     */

     //---------------------------------------------
     //
     //----------------------------------------------