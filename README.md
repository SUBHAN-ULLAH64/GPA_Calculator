# 🎓 GPA Calculator

A simple C++ application that calculates students' academic performance based on course credit hours and marks. The program calculates grades, Semester Grade Point Average (SGPA), and Cumulative Grade Point Average (CGPA), and stores the calculated academic records in a file for future reference.

## 📌 Project Overview

The GPA Calculator is designed to help students calculate and manage their academic results easily. The program takes course information from the user, processes marks and credit hours, calculates grades and GPA values, and saves the results in a file.

This project is developed using C++ and is suitable for learning programming fundamentals, calculations, conditional statements, loops, and file handling.

## ✨ Features

- **Course Input:** Enter the courses taken during a semester.
- **Credit Hours:** Input credit hours for each course.
- **Marks Input:** Enter marks obtained in each course.
- **Grade Calculation:** Calculate grades based on the entered marks.
- **SGPA Calculation:** Calculate Semester Grade Point Average.
- **CGPA Calculation:** Calculate Cumulative Grade Point Average.
- **File Handling:** Save calculated academic records in a file.
- **Record Storage:** Keep saved results for future reference.

## ⚙️ How It Works

1. The program asks the user to enter the courses for a semester.
2. The user enters the credit hours for each course.
3. The user enters the marks obtained in each course.
4. The program calculates the grade for each course according to its grading rules.
5. The program calculates the SGPA using course grade points and credit hours.
6. The program calculates the CGPA using cumulative academic results, according to the implemented logic.
7. The calculated results are stored in a file.

## 🧮 GPA Calculation

The standard weighted SGPA formula is:

**SGPA = Total of (Grade Points × Credit Hours) ÷ Total Credit Hours**

For example, if a student earns 3.5 grade points in a 3-credit-hour course and 4.0 grade points in a 2-credit-hour course:

SGPA = ((3.5 × 3) + (4.0 × 2)) ÷ (3 + 2)

SGPA = 18.5 ÷ 5 = **3.70**

The CGPA is generally calculated using the total weighted grade points across all included semesters divided by the total credit hours across those semesters. The exact calculation depends on the university's rules and the program's implementation.

## 🛠️ Technologies Used

- **Programming Language:** C++
- **Compiler:** GCC, MinGW, or another compatible C++ compiler
- **File Handling:** C++ file streams, if implemented using `fstream`
- **Development Environment:** Visual Studio Code or another C++ IDE

## 🚀 Getting Started

### Prerequisites

- A C++ compiler installed on your computer.
- Git installed if you want to clone the repository.
- A code editor or IDE, such as Visual Studio Code.

### Installation

1. Clone this repository:

   ```bash
   git clone YOUR_REPOSITORY_URL
   ```

2. Navigate to the project folder:

   ```bash
   cd GPA_Calculator
   ```

3. Compile the source file (replace `main.cpp` with your actual filename if different):

   ```bash
   g++ main.cpp -o GPA_Calculator
   ```

4. Run the program on Windows PowerShell:

   ```powershell
   .\GPA_Calculator.exe
   ```

   On Linux or macOS, run:

   ```bash
   ./GPA_Calculator
   ```

## 💾 Record Storage

The program stores calculated academic records in a file so that results can be accessed later. The actual filename, file format, and saved information depend on the implementation.

## 🎯 Learning Objectives

This project helps demonstrate:

- Variables and data types
- User input and output
- Conditional statements
- Loops
- Arithmetic operations
- Functions, if used
- Arrays or other data structures, if used
- File handling
- Problem-solving and logical thinking

## 🔮 Future Improvements

- Add a graphical user interface (GUI).
- Support multiple students and student IDs.
- Display previously saved academic records.
- Add input validation for marks and credit hours.
- Allow users to calculate results across multiple semesters.
- Customize grading rules according to different universities.

## 👨‍💻 Author

**Student Developer**

## 📄 License

This project is intended for educational purposes. A specific open-source license can be added if the project is intended for public reuse.