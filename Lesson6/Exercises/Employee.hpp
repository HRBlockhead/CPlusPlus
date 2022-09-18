class Employee
{
    private:
        int age;
        int yearsOfService;
        int salary;

    public:
        Employee(int age, int yearsOfService, int salary);
        Employee();
        ~Employee(){}

        int getAge() const { return age; }
        void setAge(int age) { this->age = age; }

        int getYearsOfService() const { return yearsOfService; }
        void setYearsOfService(int yearsOfService) { this->yearsOfService = yearsOfService; }

        int getSalary() const { return salary; }
        void setSalary(int salary) { this->salary = salary; }

        int getSalaryToNearestThousand();
};