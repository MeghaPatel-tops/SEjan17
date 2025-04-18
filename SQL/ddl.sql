CREATE DATABASE jan17SE;


CREATE TABLE student(studentId int ,studentName varchar(20),email varchar(30),contactno int)

CREATE TABLE teacher(tid int PRIMARY KEY AUTO_INCREMENT,teacherName varchar(40)not null,subject varchar(50));

alter table student add COLUMN address varchar(50);


ALTER TABLE student DROP COLUMN address

alter TABLE student CHANGE contactno phone int;

drop TABLE student


drop DATABASE jan17se

CREATE TABLE cources(cid int PRIMARY key AUTO_INCREMENT,cname varchar(20),timing varchar(10));

CREATE TABLE student_cource(scid int PRIMARY key AUTO_INCREMENT,sid int ,cid int , joindate date, FOREIGN KEY (sid) REFERENCES student(studentId), FOREIGN key (cid) REFERENCES cources(cid))

===============DML======================
Insert
INSERT into student(studentId,studentName,email,contactno)values(101,"Harsh","harsh@gmail.com",9090099);

insert into teacher(teacherName, subject)values("parth","GD");


UPDATE student set contactno=56656565 where studentId=101


update teacher set subject="java" where tid=2

DELETE FROM teacher where tid=2

