-- Inner join
SELECT Orders.OrderID, Customers.CustomerName, Orders.OrderDate
FROM Orders INNER JOIN Customers ON Orders.CustomerID=Customers.CustomerID;

-- Natural Join
SELECT Orders.OrderID, Customers.CustomerName, Orders.OrderDate
FROM Orders NATURAL JOIN Customers ON Orders.CustomerID=Customers.CustomerID;

-- Inner join using comma operator
SELECT Orders.OrderID, Customers.CustomerName, Orders.OrderDate
FROM Orders,Customers;

-- left join
SELECT column_name(s)
FROM table1 LEFT JOIN table2 ON table1.column_name = table2.column_name;

-- right join
SELECT column_name(s)
FROM table1 RIGHT JOIN table2 ON table1.column_name = table2.column_name;

-- self join
SELECT column_name(s) FROM table1 T1, table1 T2 WHERE condition;