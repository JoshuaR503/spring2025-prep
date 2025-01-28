01/27/2025

CLASS GOALS:
- design a database 
- 


we do not store data linearly aka in files
we use databases because we can get keys and other ways to manage the data
SQL is not complied but interepreted
NoSQL use other than SQL but may use sql sometimes 
Relational databases use SQL 
when designing databases you need to consider all the possibilities


why use a database
- have an effective and better way to manage data 
- DBMS are tools to create, manage and interact with databases
- MS SQL Server is tough to use

dangers of no sql 
- if you try to transfer data and the system crashes the data is GONE
- noSQL cant implement atomicy, considenty,m isolation and durabiliraty  SOLID
- atomicity means all or nothing


cool stuff of sql
- you do not need to have ridig schemes and is very flexible 
- they are good for distributed systems

it's not about what you know, it's about what the application needs

## Levels Of Abstraction 
PHYSICAL:   
You know primary and foreign keys, this is the content that nmatters the most

LOGICAL:
You can design schemas and change them later

VIEW: 
Only code about tha arthitecture 

## Database Engine <- build a database engine as a side project?
Storage Manager

Query Preprocessing 

Transaction Manager 

## INNO <- most popular ?


## Modeling 

|---------- |----------   |---------- |                           
|           |             |           |                                     
| CLASS     | ENROLL      |STUDENT    |           <- we are going to learn about that the circle, and signs mean                             
|           |             |           |                                     
|---------- |----------   |---------- |                              

" A class shall have at least one student"
A student shall enroll in at least one class


SQUARE means an entity, an entity is any abstract object that can have properites 
objects inside databases can be an entity 
attributes are properites of an entity, every entity can have attributes 
there are also mutlivalue attributes 

Power engineering?

### RELATIONAL MODEL 

ID
Name
dept id 

every time soemthing is an entity you can be sure there will be a table =
usually a table is a set of entity, every row is an enity 

## DEGREE OF TABLE
number of propties or attributes the table has
the number of columns 
degree is important because when creating queries you need to know the degree of the tale
the cardinality of the table is the number of unique entitites you have in the table 

## Business requirments and database requirments 

## null vs empty 
null means it does not exitst, emoty means it exsits but it does not have any value (you do not have a size)

null does not coount as cardinality unless the primary key is not null
primary key must have a value and must not be repeated 
databases are implemented as linkedlists, every table has a pointer 
memory in databases is dynamic 
every part of the table is a pointer

NULL is not a poiner, we have an entity but it does not have a valye however is still using a value 

## fields authemtication 
why not just let users enter raw data, breaking normalization 

### DDL Data Detinition Langiage 
the code to create/alter the tables
you cant just drop tables lmao because you will wipe out everything 
you need to know the order in which you will create the tables 

### DML: Data Manipulation Language 
this is why the degree of the table is important

### DQL: Data Query Language 
learn about selecting, joins, gropu by, having, where, [learn trees? logic about the query.. traverse?]
- order of exceutions of queries 
- every time we cover soemthing we will optimize it

### DCL:  Data Control Language 
- manage persimmsion and control access
- how to manage permissions for users 
- avoid sql injections 

### Indexing and DB organization 
- when you write a query you need to focus on the why, not the how
- you need to optimize the query and be efficint
- if you have a little bit of data, the database will use the a linear fashion while if its more it will use indexes
- plus 3 is an optimization of a binary search tree 
- BTS = Search O(log base 2 n )
- B+ Tree = Search O (log base f n)


Log base 2 16 = 4 comparations 
Log base 4 16 = 2 comparations

increase poinnters hortizontally, not vertically because they vertically icnreases complexltuy 

INDEXING AND DB Organizayion, 
ROOT, Split node into two, copy up the smallest value 
there are ppointers pointing at the database and ponting at the data 
time complextity using hashses will use extentible hashes 

### Transaction Management and Concurrency Control 

Hamiltonian Path 
Traveing Salesman 
- why do we need to manage these things? we will need to implement our own dbms
- most companies end up moving to their own implementastions because they need more control over their data 

### Distributed and parallel databases types of paralelism, partititon and pipelining 

- Database replication, optimize the way databases are running and create copies and save them to different servers, one server writes and the other ones read 
- only one server writes and the other ones read since we do most reading 
- every micro service has an ID.
