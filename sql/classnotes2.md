






02/03/2025 

Getting started with DB systems

Entitiy: recognizable object, either concrete or abstract that can be modeled, and can store information 

String entity: an entity that has partial participation in the relationship with other entitires

Weak entity: an etity that has total participation in the relationsjop with other entities 

Entity Set: collection of entitties 

Attribute: defines a characterist 

key attributr, an attribute whose values uniquely identify each entity in the set
 
 primary key, foreign key, UA, Check 

 Compsotive attribute: an attribute that can be divided into smaller attributes

 Multivaluded Attribute: an attribute that can hold many valys for a single entitiy 

 Depending on how is set up, an email can be a mutlivalye attribute. 

 Derived atrribute: attributes that can be computed from the data base and are not in the database. Can be computed from other attributes but thay, thesmvles are NOT in the database. An example is the age of an employee. We can use the date of birth and then compute the age of an employee. This is an example of a 

 Domain: each attribute has a domian. domain is not a data type. 



Project Description 


functional requirmeents are priotoy 


FNF first normal form 
NF1 

you are not allowed to have groups of the same attribute/propertu 



data grip, learning SQL 




time to create a functional requirement 
refine who is the user, a customer, buyer, employee, etc. 


1. a registered user shall login into the system at least one time 
    if you do not choose the right cardinality, you could meka e amistake 
    every time you define an entity, it will be a table 


relations are not tables by default 
sometimes relations become a table, but this mostly happens in joins 


cardinalities have upwe bound 
lower bound <- 1
many is never inifniit because it has a limit in database systems


upper bound -> type of relationship
lower bound -> type of entity F1 <------ weak, strong


for an etitiy to be weak


in databases, we need a functional requirmeent and an enity relationship

A system can have many regustered users 





1. jose logs into the airport managmeen tstem
2. he searches for available flights to valencia 
3. jose selects a sutable flight and proceeds to book a ticket 

specialization vs. geniraliation 
aggregation: one to many, many to one - the polyforsm of databases
he inputs personal details and payment information 
a customer can book at least one ticket
a customer shal book at least one flight ticket, and a flight ticket 
the flight ticket depends on the flight, with both 1 upper and lower bound
the flight ticket can belong to one and only one user
a customer shall have one payment type at the type 
a payment type shall be chosen by many users


6. on the day og travel, Jose logs in again to check-in online 

Customers hall checkin one and only one times into a flight
A flight shall be chekced in by many customers 

should we create a booking flight system just for fun?



A pet shall checkin on many flights 
A flight shall have mqany pets checked in 

the solution in this case is creating another table. 
tables sometimes are not the answer to systems constrints because they reduce the performance of the table since you will need more joins 


