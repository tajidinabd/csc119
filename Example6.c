//*********************************************************************************
// File Input/Output Example       
// Programmer: (Your Name)                                                  
// Date: (Date Written or Completed)
//
//********************************************************************************
//                                  Program Description    
//*********************************************************************************                                                   
// 1.	Create a data file called friends.dat using any text-based editor and enter
//      at least three records storing your friends� first and last names. Make 
//      sure that each field in the record is separated by a white space.
// 2.	Using the friends.dat file from #1 above, build another program that used 
//      the fscanf() function for reading each record and printing the field 
//      information to standard output until the end-of-file is reached. Include
//      an error-handling routine that notifies the user of any system errors and
//      exits the program.
//
//
//**********************************************************************************
//                                  Library Includes
//**********************************************************************************

#include <stdio.h>
#include <stdlib.h>

//**********************************************************************************
//                                   Declaration of "main"
//**********************************************************************************

main ()
{

//**********************************************************************************
//                         Assign a file pointer to read data
//********************************************************************************** 
   
    FILE *pntRead;
    
    char charFirstName[20];
    char charLastName[20];

//**********************************************************************************
//                 Read data from friends.dat and assign to pointer
//**********************************************************************************
    
     pntRead = fopen("friends.dat", "r");
    
//**********************************************************************************
//                          Check that file is read correctly
//**********************************************************************************
    
    if (pntRead == NULL)
        goto ErrorHandle;
  
//**********************************************************************************
//                         Assign data from pointer to variables  
//**********************************************************************************
    
    else
        printf("\nYour friends\n\n");
        fscanf(pntRead, "%s%s", charFirstName, charLastName);
    
//**********************************************************************************
//                       Print the data from the "friends.dat" file
//**********************************************************************************
  
    while (!feof(pntRead))
    {
        printf("%s %s\n", charFirstName, charLastName);
        fscanf(pntRead, "%s%s", charFirstName, charLastName);
    }

//**********************************************************************************
//                                Exit with no errors
//**********************************************************************************    
    
    exit(EXIT_SUCCESS);
    
//**********************************************************************************
//                        Exit and display an error code
//**********************************************************************************    
    
    ErrorHandle:
        perror("The following error occured");
        exit(EXIT_FAILURE);
    
}