SELECT name,email FROM `employee` 


SELECT name as EmployeeName FROM `employee` 

SELECT * FROM `employee` WHERE EmployeeID=2


SELECT DISTINCT(studentName) as StudentName from student

SELECT * from employee ORDER by name ASC;

SELECT * from employee ORDER by name DESC;

SELECT * FROM `employee` WHERE DepartmentID=10 AND Salary>65000

SELECT * FROM `employee` WHERE DepartmentID=10 OR Salary>79000;

SELECT * FROM `employee` WHERE  NOT DepartmentID = 1


SELECT min(Salary) as Minsalary , name from employee

SELECT max(Salary) as Maxsalary , name from employee;

SELECT COUNT(name) as countofemp FROM `employee` WHERE Salary>65000

SELECT avg(Salary) as avgSalary FROM `employee` WHERE Salary>65000;

SELECT sum(Salary) as totalSalary FROM `employee` WHERE Salary>65000;

SELECT * FROM `employee` WHERE name LIKE "a%"

SELECT * FROM `employee` WHERE name LIKE "%n";

SELECT * FROM `employee` WHERE name LIKE "%n%";

SELECT * FROM `employee` WHERE DepartmentID in (1,2,3)

SELECT * FROM `employee` WHERE DepartmentID NOT IN (1,2,3)

SELECT * FROM `employee` WHERE HireDate BETWEEN "2017-01-01" AND "2019-12-31";


SELECT * FROM `employee` WHERE Salary BETWEEN 65000 and 70000;


SELECT * from employee join department on employee.DepartmentID= department.DepartmentID

SELECT * FROM `employee` join   project on employee.ProjectID = project.ProjectID

SELECT * FROM `employee` left join   project on employee.ProjectID = project.ProjectID

SELECT * FROM `employee` right join   project on employee.ProjectID = project.ProjectID

SELECT * FROM `employee` FULL join project;

SELECT COUNT(EmployeeID),DepartmentName FROM `employee` join department on employee.DepartmentID= department.DepartmentID GROUP BY(employee.DepartmentID)

SELECT SUM(Salary),DepartmentName FROM `employee` join department on employee.DepartmentID= department.DepartmentID GROUP BY(employee.DepartmentID);

SELECT SUM(Salary) as totalSalary,DepartmentName FROM `employee` join department on employee.DepartmentID= department.DepartmentID GROUP BY(employee.DepartmentID) HAVING totalSalary >100000;

SELECT * FROM `project` WHERE  EXISTS(SELECT * from employee where employee.ProjectID = project.ProjectID and salary>60000);

====================
CREATE PROCEDURE empProce() 
SELECT * from employee;

CALL `empProce`();

==============================
CREATE PROCEDURE getEmpById(id int)
SELECT * FROM employee WHERE EmployeeID =id

SET @p0='9'; CALL `getEmpById`(@p0);

// CALL `getEmpById`(6)


============trigger==========================
CREATE TRIGGER empTrigger
AFTER UPDATE ON employee
FOR EACH ROW
INSERT INTO emplog(empid,timeof)VALUES(old.EmployeeID,now())


START TRANSACTION;
DELETE FROM employee where employeeId=13;
COMMIT;

START TRANSACTION;
DELETE FROM employee where employeeId=12;
ROLLBACK;


START TRANSACTION;
UPDATE employee set name="sitesh" where employeeId=12;
ROLLBACK;



=============================================
START TRANSACTION;

INSERT INTO student(studentId,studentName,email)VALUES(11,"vishal","vishal@gmail.com");

SAVEPOINT sp1;

UPDATE student set studentName="veer" where studentId=4;


SAVEPOINT sp2;

DELETE FROM student where studentId=11;


ROLLBACK  to sp2;

COMMIT;

======================





DELIMITER $$

CREATE PROCEDURE cursorExample()
BEGIN
    DECLARE id INT;
    DECLARE empSalary FLOAT;
    DECLARE is_done INT DEFAULT 0;

    DECLARE empSalaryChange CURSOR FOR SELECT EmployeeID, Salary FROM employee;
    DECLARE CONTINUE HANDLER FOR NOT FOUND SET is_done = 1;

    OPEN empSalaryChange;

    get_emp: LOOP
        FETCH empSalaryChange INTO id, empSalary;

        IF is_done = 1 THEN
            LEAVE get_emp;
        END IF;

        UPDATE employee SET Salary = empSalary * 1.1 WHERE EmployeeID = id;
    END LOOP get_emp;

    CLOSE empSalaryChange;
END$$

DELIMITER ;
