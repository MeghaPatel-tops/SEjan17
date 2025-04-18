CREATE TABLE Department (
    DepartmentID INT PRIMARY KEY,
    DepartmentName VARCHAR(50)
);

CREATE TABLE Project (
    ProjectID INT PRIMARY KEY,
    ProjectName VARCHAR(100),
    DepartmentID INT,
    FOREIGN KEY (DepartmentID) REFERENCES Department(DepartmentID)
);

INSERT INTO Department (DepartmentID, DepartmentName) VALUES
(1, 'HR'),
(2, 'Finance'),
(3, 'Engineering'),
(4, 'Marketing'),
(5, 'IT'),
(6, 'Operations'),
(7, 'Sales'),
(8, 'Legal'),
(9, 'Customer Support'),
(10, 'Procurement');


INSERT INTO Project (ProjectID, ProjectName, DepartmentID) VALUES
(1, 'Budget Planning', 2),
(2, 'New App Dev', 3),
(3, 'Ad Campaign 2025', 4),
(4, 'CRM Implementation', 7),
(5, 'Recruitment Drive', 1),
(6, 'Support Portal', 9),
(7, 'Logistics Revamp', 6),
(8, 'Supplier Audit', 10),
(9, 'Data Privacy Check', 8),
(10, 'Intranet Upgrade', 5);


CREATE TABLE Employee (
    EmployeeID INT PRIMARY KEY,
    Name VARCHAR(100),
    Email VARCHAR(100),
    Phone VARCHAR(15),
    HireDate DATE,
    JobTitle VARCHAR(50),
    Salary DECIMAL(10,2),
    DepartmentID INT,
    ProjectID INT,
    FOREIGN KEY (DepartmentID) REFERENCES Department(DepartmentID),
    FOREIGN KEY (ProjectID) REFERENCES Project(ProjectID)
);


INSERT INTO Employee (EmployeeID, Name, Email, Phone, HireDate, JobTitle, Salary, DepartmentID, ProjectID) VALUES
(1, 'Alice Johnson', 'alice.johnson@example.com', '555-0101', '2021-03-15', 'Software Engineer', 75000.00, 3, 2),
(2, 'Bob Smith', 'bob.smith@example.com', '555-0102', '2020-07-20', 'HR Manager', 68000.00, 1, 5),
(3, 'Charlie Brown', 'charlie.brown@example.com', '555-0103', '2019-11-05', 'Marketing Specialist', 62000.00, 4, 3),
(4, 'Dana White', 'dana.white@example.com', '555-0104', '2018-01-10', 'IT Support', 59000.00, 5, NULL),
(5, 'Evan Davis', 'evan.davis@example.com', '555-0105', '2022-04-01', 'Financial Analyst', 70000.00, 2, 1),
(6, 'Fiona Clark', 'fiona.clark@example.com', '555-0106', '2017-06-25', 'Operations Lead', 71000.00, 6, 7),
(7, 'George King', 'george.king@example.com', '555-0107', '2023-01-15', 'Sales Executive', 58000.00, 7, 4),
(8, 'Hannah Lewis', 'hannah.lewis@example.com', '555-0108', '2016-09-30', 'Legal Advisor', 80000.00, 8, NULL),
(9, 'Ian Wright', 'ian.wright@example.com', '555-0109', '2021-12-05', 'Support Engineer', 60000.00, 9, 6),
(10, 'Julia Roberts', 'julia.roberts@example.com', '555-0110', '2015-02-18', 'Procurement Officer', 67000.00, 10, 8);

