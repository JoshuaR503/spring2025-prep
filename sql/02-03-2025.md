# Class Notes - 02/03/2025

## Getting Started with DB Systems

### Entity
- **Entity**: A recognizable object, either concrete or abstract, that can be modeled and can store information.
- **Strong Entity**: An entity that has partial participation in the relationship with other entities.
- **Weak Entity**: An entity that has total participation in the relationship with other entities.
- **Entity Set**: A collection of entities.

### Attribute
- **Attribute**: Defines a characteristic.
- **Key Attribute**: An attribute whose values uniquely identify each entity in the set.
    - **Primary Key**
    - **Foreign Key**
    - **Unique Attribute (UA)**
    - **Check Constraint**
- **Composite Attribute**: An attribute that can be divided into smaller attributes.
- **Multivalued Attribute**: An attribute that can hold many values for a single entity.
    - Example: Depending on how it is set up, an email can be a multivalued attribute.
- **Derived Attribute**: Attributes that can be computed from the database and are not stored in the database.
    - Example: The age of an employee can be computed from the date of birth.

### Domain
- **Domain**: Each attribute has a domain. A domain is not a data type.

## Project Description

### Functional Requirements
- Functional requirements are a priority.

### First Normal Form (1NF)
- You are not allowed to have groups of the same attribute/property.

### Data Grip
- Learning SQL.

### Time to Create a Functional Requirement
- Refine who is the user: a customer, buyer, employee, etc.

### Example Use Case
1. A registered user shall log into the system at least one time.
     - If you do not choose the right cardinality, you could make a mistake.
     - Every time you define an entity, it will be a table.

### Relations
- Relations are not tables by default.
- Sometimes relations become a table, but this mostly happens in joins.

### Cardinalities
- **Upper Bound**: Type of relationship.
- **Lower Bound**: Type of entity.
    - Example: F1 <------ weak, strong

### Weak Entity
- For an entity to be weak, it must have total participation in the relationship.

### Functional Requirement and Entity Relationship
- In databases, we need a functional requirement and an entity relationship.
- A system can have many registered users.

### Example Scenario
1. Jose logs into the airport management system.
2. He searches for available flights to Valencia.
3. Jose selects a suitable flight and proceeds to book a ticket.
4. He inputs personal details and payment information.
5. A customer can book at least one ticket.
6. On the day of travel, Jose logs in again to check-in online.

### Specialization vs. Generalization
- **Aggregation**: One to many, many to one - the polymorphism of databases.

### Constraints
- A customer shall book at least one flight ticket.
- A flight ticket depends on the flight, with both upper and lower bounds.
- A flight ticket can belong to one and only one user.
- A customer shall have one payment type at a time.
- A payment type shall be chosen by many users.
- Customers shall check-in one and only one time into a flight.
- A flight shall be checked in by many customers.
- A pet shall check-in on many flights.
- A flight shall have many pets checked in.

### Solution
- The solution in this case is creating another table.
- Tables sometimes are not the answer to system constraints because they reduce the performance of the table since you will need more joins.
