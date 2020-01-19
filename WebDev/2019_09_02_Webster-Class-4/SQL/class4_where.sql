-- Where clause syntax
SELECT column1, column2, ... FROM table_name WHERE condition;
SELECT * FROM Customers WHERE Country='Mexico';

-- Operator		Description

-- =			Equal	
-- >			Greater than	
-- <			Less than	
-- >=			Greater than or equal	
-- <=			Less than or equal	
-- !=			Not equal. In some versions of SQL this operator may be written as <>


-- ----------------------------------------------------------------------


-- AND OR NOT with WHERE clause
SELECT * FROM Customers WHERE Country='Germany' AND (City='Berlin' OR City='München');

-- BETWEEN operator
SELECT column_name(s) FROM table_name WHERE column_name BETWEEN value1 AND value2;
SELECT * FROM Products WHERE Price BETWEEN 10 AND 20;

-- LIKE and Wildcards		
	-- LIKE syntax
	SELECT column1, column2, ... FROM table_name WHERE columnN LIKE pattern;
	-- % - The percent sign represents zero, one, or multiple characters
	-- _ - The underscore represents a single character
	-- WHERE CustomerName LIKE 'a%'		Finds any values that start with "a"
	-- WHERE CustomerName LIKE '%a'		Finds any values that end with "a"
	-- WHERE CustomerName LIKE '%or%'	Finds any values that have "or" in any position
	-- WHERE CustomerName LIKE '_r%'	Finds any values that have "r" in the second position
	-- WHERE CustomerName LIKE 'a__%'	Finds any values that start with "a" and are at least 3 characters in length
	-- WHERE ContactName  LIKE 'a%o'	Finds any values that start with "a" and ends with "o"

-- ----------------------------------------------------------------------



-- !
-- - (unary minus), ~ (unary bit inversion)
-- ^
-- *, /, DIV, %, MOD
-- -, +
-- <<, >>
-- &
-- |
-- = (comparison), <=>, >=, >, <=, <, <>, !=, IS, LIKE, REGEXP, IN
-- BETWEEN, CASE, WHEN, THEN, ELSE
-- NOT
-- AND, &&
-- XOR
-- OR, ||
-- = (assignment), :=

select * from users where A and B or C and D;