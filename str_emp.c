#include <stdio.h>

// Define the structure to store employee information
struct employee {
    int empNo;
    char name[50];
    char department[50];
    float basicPay;
    float DA;
    float HRA;
    float grossSalary;
};

int main() {
    // Open the input file
    FILE *inputFile = fopen("I_P.txt", "r");
    if (inputFile == NULL) {
        printf("Error opening input file!\n");
        return 1;
    }

    // Open the output file
    FILE *outputFile = fopen("O_P.txt", "w");
    if (outputFile == NULL) {
        printf("Error opening output file!\n");
        fclose(inputFile);
        return 1;
    }

    // Read employee details from the input file and calculate DA, HRA, and gross salary
    struct employee emp, highestPaid;
    float maxSalary = 0;

    while (fscanf(inputFile, "%d %s %s %f", &emp.empNo, emp.name, emp.department, &emp.basicPay) != EOF) {
        // Calculate DA and HRA (assuming DA is 25% and HRA is 15% of basic pay)
        emp.DA = 0.25 * emp.basicPay;
        emp.HRA = 0.15 * emp.basicPay;
        // Calculate gross salary
        emp.grossSalary = emp.basicPay + emp.DA + emp.HRA;

        // Update highest paid employee
        if (emp.grossSalary > maxSalary) {
            maxSalary = emp.grossSalary;
            highestPaid = emp;
        }
        
        // Write employee details to output file
        fprintf(outputFile, "%d %s %s %.2f %.2f %.2f %.2f\n", emp.empNo, emp.name, emp.department, emp.basicPay, emp.DA, emp.HRA, emp.grossSalary);
    }

    // Close files
    fclose(inputFile);
    fclose(outputFile);

    // Display details of the employee having the highest gross salary
    printf("Employee with highest gross salary:\n");
    printf("Employee No: %d\n", highestPaid.empNo);
    printf("Name: %s\n", highestPaid.name);
    printf("Department: %s\n", highestPaid.department);
    printf("Basic Pay: %.2f\n", highestPaid.basicPay);
    printf("DA: %.2f\n", highestPaid.DA);
    printf("HRA: %.2f\n", highestPaid.HRA);
    printf("Gross Salary: %.2f\n", highestPaid.grossSalary);

    return 0;
}
