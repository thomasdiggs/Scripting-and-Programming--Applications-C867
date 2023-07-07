# Scripting and Programming - Applications C867

## INTRODUCTION

Throughout your career in software development, you will develop and maintain new and existing applications. You will be expected to fix issues as well as add new enhancements or migrate existing applications to new platforms or different programming languages. As a software developer, your role will be to create a design of an application based on given business requirements. After the design is completed, you must implement the application based on the design document and provided requirements.

In this assessment, you will create a C++ application based on the scenario below. The skills you demonstrate in your completed application will be useful in responding to technical interview questions for future employment. 

This project will require an integrated development environment (IDE). You must use either Visual Studio or Xcode for this assessment. Directions for accessing these IDEs can be found in the attached “IDE Instructions.”

Your submission should include a zip file with all the necessary code files to compile, support, and run your application. The zip file submission must also keep the project file and folder structure intact for the Visual Studio IDE, Eclipse IDE or Mac XCode IDE.


## SCENARIO

You are hired as a contractor to help a university migrate an existing student system to a new platform using C++ language. Since the application already exists, its requirements exist as well, and they are outlined in the next section. You are responsible for implementing the part of the system based on these requirements. A list of data is provided as part of these requirements. This part of the system is responsible for reading and manipulating the provided data.

You must write a program containing two classes (i.e., Student and Roster). The program will maintain a current roster of students within a given course. Student data for the program include student ID, first name, last name, email address, age, an array of the number of days to complete each course, and degree program. This information can be found in the “studentData Table” below. The program will read a list of five students and use function calls to manipulate data (see part F4 in the requirements below). While parsing the list of data, the program should create student objects. The entire student list will be stored in one array of students called classRosterArray. Specific data-related output will be directed to the console.

**studentData Table**


| Student ID | First Name | Last Name | Email | Age | Days in Course | Degree Program |
| ---------- | ---------- | --------- | ----- | --- | -------------- | -------------- |
| A1 | John | Smith | John1989@gm ail.com | 20 | 30, 35, 40 | SECURITY |
| A2 | Suzan | Erickson | Erickson_1990@gmailcom | 19 | 50, 30, 40 | NETWORK |
| A3 | Jack | Napoli | The_lawyer99yahoo.com | 19 | 20, 40, 33 | SOFTWARE |
| A4 | Erin | Black | Erin.black@comcast.net | 22 | 50, 58, 40 | SECURITY |
| A5 | Your first name | Your last name | Your valid email address | Your age | Number of days to complete 3 courses | SOFTWARE |

The data should be input as follows:

const string studentData[] = {
    "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY", 
    "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK", 
    "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE", 
    "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY", 
    "A5,[firstname],[lastname],[emailaddress],[age], [numberofdaystocomplete3courses],SOFTWARE"
};

You may not include third-party libraries. Your submission should include one zip file with all the necessary code files to compile, support, and run your application. You must also provide evidence of the program’s required functionality by taking a screen capture of the console run, saved as an image file.

Note: Each file must be an attachment no larger than 30 MB in size.
