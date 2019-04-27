//ZAY YAR TUN 
// TUE 11-2pm 
//Room HC47
#include<stdio.h>
#include<string.h>
// Encrypted caesar

void caesar(char string1[], int shift);                       // function prototype for encrypted
void caesar1(char string2[], int shift);                      // function prototype for decrypted
int main () 
 {
    int i1;
    for ( i1=0 ; i1=i1+1 ; i1++ ){                            // loop to ask when program finished
    printf("\nEnter integer:");                                // calling case number
    int z;
    scanf("%d",&z);
    switch(z){
             case 1: {
                  char string1[200];                          // array size for user input
                  int shift;                                  // assign integer for shifting
                  printf("\nEnter text to be rotational encrypted :");  // printing to ask user
                  scanf("%c", &string1);
                  fgets (string1, 200 , stdin);               // string stdin
                 
                  printf("enter shifts no: to the back: "); // printing to ask shift 1-10
                  scanf("%d", &shift);                        // store shift number for encrypt.
                 
                  caesar (string1, shift);                    // calling string1 encrypted function
                 
                 break ;
                 }
             //////////////////////////////////
             case 2 : {
                 char string2[200];                           // array size for user input                        
                 int shift;                                   // assign integer for shifting  
                 printf("\nEnter text to be rotational decrypted : ");   // printing to ask user
                 scanf("%c", &string2);
                 fgets (string2, 200 , stdin);                // string stdin
                 
                 printf("enter shifts no: to the back: ");  // printing to ask shift 1-10
                 scanf("%d", &shift);
                 
                  caesar1 (string2, shift);                   // calling string2 decrypted function
                 break;
                 }
				//////////////////////////////// 
             case 3 : {
                 char* ciphertext = "QWERTYUIOPASDFGHJKLZXCVBNM";    // Alpha-QWER keyboard cipher lookup
                 char strin[500];                                    // string 
                 printf("\nEnter text for substitution encrypted: ");
                 scanf("%c",&strin);
                 fgets(strin,500,stdin);                             // string from user input
                 strin[strlen(strin) - 1] = 0;                       // remove the \n (newline)
                 int count = strlen(strin);                          //  the string length
                 char strout[count];                                 //  string output 
                 int i;
                 for( i = 0; i < count; i++) {                       // loop through characters in input
                 int index = ((int) strin[i]) - 65;                  // get the index in the cipher by subtracting 'A' (65) from the current character
                  if(index < 0) {
                  strout[i] = ' ';                                   // if index < 0, put a space to account for spaces
                 }
                 else {
                 strout[i] = ciphertext[index];                      // else, assign the output[i] to the ciphertext[index]
                 }  
                 }
                 strout[count] = 0;                                  // null-terminate the string
                 fputs(strout, stdout);                              // final output
                 break;
                 }
				 ///////////////////////////////////
             case 4 : {
                 char* ciphertext= "KXVMCNOPHQRSZYIJADLEGWBUFT";     //substitution  decrypted cipher
                 char strin[500];                                    // string
                 printf("\nEnter text for substitution decrypted: ");
                 scanf("%c",&strin);
                 fgets(strin,500,stdin);                             //  string from user input
                 strin[strlen(strin) - 1] = 0;                       // remove the \n (newline)
                 int count = strlen(strin);                          //  the string length
                 char strout[count];                                 // string output
                 int i;
                 for( i = 0; i < count; i++) {                       // loop through characters in input
                 int index = ((int) strin[i]) - 65;                  // get the index in the cipher by subtracting 'A' (65) from the current character
                  if(index < 0) {
                  strout[i] = ' ';                                   // if index < 0, put a space to account for spaces
                 }
                 else {
                 strout[i] = ciphertext[index];                      // else, assign the output[i] to the ciphertext[index]
                 }  
                 }
                 strout[count] = 0;                                  // null-terminate the string
                 fputs(strout, stdout);                              // final output 
                 }
                 break;
                 /////////////////////////////////////
                 case 0 : {
                     printf (" \nProgram finished:");
                     printf (" \nHAPPY DAY!");
                     return 0;
                 }
    }}
    return 0;
 }
////////////////////////////////////////////////    
    // Encrypted function
  void caesar(char string1[], int shift) {
  int i = 0;                                            //counter

  while (string1[i] != '\0') {                          // input eg.abcd
    if (string1[i] >= 'a' && string1[i]<='z') {         //encrypting process for lower case letter, start from a.
        char newletter1 = string1[i] - 'a' + 26;
        newletter1 -= shift;                            //shifting letter to the back
        newletter1 = newletter1 % 26;
        string1[i] = newletter1 + 'a';
    }
    else if (string1[i] >= 'A' && string1[i]<='Z') {    //encrypting process for Upper case letter, start from A.
        char newletter1 = string1[i] - 'A' + 26;
        newletter1 -= shift;
        newletter1 = newletter1 % 26;
        string1[i] = newletter1 + 'A';
    }
    else if (string1[i] >= '0' && string1[i]<='9') {
        char newletter1 = string1[i] - '0' + 10;
        newletter1 -= shift;
        newletter1 = newletter1 % 10;
        string1[i] = newletter1 + '0';
    }
    i++;
  }
  fputs( string1,stdout);
}  

   // Decrypted function
   void caesar1(char string2[], int shift) {
   int i = 0;                                               //counter

   while (string2[i] != '\0') {                             // input eg.abcd
    if (string2[i] >= 'a' && string2[i]<='z') {             //decrypting process for lower case letter, start from a
        char newletter1 = string2[i] - 'a' + 26;  
        newletter1 += shift;                                //shifting letter to the front
        newletter1 = newletter1 % 26;
        string2[i] = newletter1 + 'a';
    }
    else if (string2[i] >= 'A' && string2[i]<='Z') {        //decrypting process for Upper case letter, start from A
        char newletter1 = string2[i] - 'A' + 26;
        newletter1 += shift;
        newletter1 = newletter1 % 26;
        string2[i] = newletter1 + 'A';
    }
    else if (string2[i] >= '0' && string2[i]<='9') {
        char newletter1 = string2[i] - '0' + 10;
        newletter1 += shift;
        newletter1 = newletter1 % 10;
        string2[i] = newletter1 + '0';
    }
    i++;
  }
  fputs( string2,stdout);
  
}