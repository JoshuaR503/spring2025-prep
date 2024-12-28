# Relational Algebra

Relational algebra is a procedural query language that works on relational databases. It uses operators to perform queries. Here, we will discuss several key operators in relational algebra and their SQL equivalents.

## Projection Operator

The projection operator takes in a single relation as input and selects only the columns specified. The columns are specified in the subscript of the operator like almost all parameters to operators. The output schema of projection is determined by the schema of the column list. The projection operator is relational algebra’s version of the SQL `SELECT` clause.

```sql
SELECT name FROM dogs;
```

## Selection Operator

The selection operator takes in a single relation and filters rows based on a certain condition. The output schema will be the same as the input schema, and duplicate elimination is not needed for selection. Don’t let the name confuse you - this operator is equivalent to SQL’s `WHERE` clause, not its `SELECT` clause. Let’s try to express the following query in terms of relational algebra:

```sql
SELECT name, age FROM dogs WHERE age = 12;
```

## Union Operator

The first way we will learn how to combine data from different relations is with the union operator. Just like the `UNION` clause in SQL, we take all the rows from each tuple and combine them, removing duplicates along the way. As an example, say we have a dogs table:

```sql
SELECT name FROM dogs
UNION
SELECT name FROM cats;
```

## Set Difference Operator

Another set operator is the set difference operator. Same as with union, both input relations must be compatible (the columns must be in the same order with the same type). Set difference is equivalent to the SQL clause `EXCEPT`. It returns every row in the first table except the rows that also show up in the second table. Similar to selection, no duplicate elimination is needed for set difference. If you run:

```sql
SELECT name FROM dogs
EXCEPT
SELECT name FROM cats;
```

Garfield does not show up because he is in the cats table, and none of the cats’ names will show up because it is only possible for rows from the first relation to show up in the output.

## Intersection Operator

Intersection is just like the `INTERSECT` SQL operator in that it only keeps rows that occur in both tables in the intersection. If you run:

```sql
SELECT name FROM dogs
INTERSECT
SELECT name FROM cats;
```

Garfield is the only name to occur in both tables.

## Cross Product Operator

The cross product operator is just like performing a Cartesian product in SQL. The output is one tuple for every possible pair of tuples from both relations. The schemas of the two input relations do not have to be compatible because cross product directly concatenates them. No duplicate elimination is needed because none will be generated. As an example, say we have a dogs table:

```sql
SELECT * FROM dogs, parks;
```

## Joins

Joins are used to combine rows from two or more tables based on a related column between them. Here are some common types of joins:

### Inner Join

An inner join returns rows when there is a match in both tables.

```sql
SELECT dogs.name, parks.location
FROM dogs
INNER JOIN parks ON dogs.park_id = parks.id;
```

### Left Join

A left join returns all rows from the left table, and the matched rows from the right table. If no match is found, NULL values are returned for columns from the right table.

```sql
SELECT dogs.name, parks.location
FROM dogs
LEFT JOIN parks ON dogs.park_id = parks.id;
```

### Right Join

A right join returns all rows from the right table, and the matched rows from the left table. If no match is found, NULL values are returned for columns from the left table.

```sql
SELECT dogs.name, parks.location
FROM dogs
RIGHT JOIN parks ON dogs.park_id = parks.id;
```

### Full Join

A full join returns rows when there is a match in one of the tables. It returns all rows from the left table and all rows from the right table. Rows without a match in one of the tables will have NULL values.

```sql
SELECT dogs.name, parks.location
FROM dogs
FULL JOIN parks ON dogs.park_id = parks.id;
```