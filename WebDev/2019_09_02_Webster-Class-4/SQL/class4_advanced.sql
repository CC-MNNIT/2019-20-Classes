-- GROUP BY and HAVING
SELECT COUNT(CustomerID), Country FROM Customers GROUP BY Country
SELECT COUNT(CustomerID) AS count, Country FROM Customers GROUP BY Country HAVING count>5

SELECT Employees.FirstName, COUNT(Orders.OrderID) AS NumberOfOrders
FROM (Orders INNER JOIN Employees ON Orders.EmployeeID = Employees.EmployeeID)
GROUP BY Employees.EmployeeID
HAVING COUNT(Orders.OrderID) > 10;

-- ------------------------------------------------------------------------------

-- IN 

SELECT column_name(s)
FROM table_name
WHERE column_name IN (value1, value2, ...);

SELECT * FROM Customers
WHERE Country NOT IN ('Germany', 'France', 'UK');



SELECT column_name(s)
FROM table_name
WHERE column_name IN (SELECT STATEMENT);

SELECT * FROM Customers
WHERE Country IN (SELECT DISTINCT Country FROM Suppliers);

-- ------------------------------------------------------------------------------


-- Views

-- Create a view
CREATE VIEW view_name AS
SELECT column1, column2, ... FROM table_name WHERE condition;

CREATE VIEW [Brazil Customers] AS
SELECT CustomerName, ContactName FROM Customers WHERE Country = "Brazil";

CREATE VIEW [Products Above Average Price] AS
SELECT ProductName, Price FROM Products WHERE Price > (SELECT AVG(Price) FROM Products);

-- Create or Replace a view
CREATE OR REPLACE VIEW view_name AS
SELECT column1, column2, ... FROM table_name WHERE condition;

-- Drop view
DROP VIEW [Brazil Customers];

-- ------------------------------------------------------------------------------
