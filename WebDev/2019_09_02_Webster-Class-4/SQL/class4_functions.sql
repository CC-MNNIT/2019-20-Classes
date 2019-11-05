-- String functions
	-- CHAR_LENGTH, CHARACTER_LENGTH
	SELECT CHAR_LENGTH(name) AS LengthOfName from Customers;
	-- CONCAT
	SELECT CONCAT(Address, " ", PostalCode, " ", City) AS FullAddress FROM Customers;
	-- LOWER, LCASE, UPPER, UCASE
	SELECT LOWER(CustomerName) AS LowercaseCustomerName FROM Customers;
	SELECT UPPER(CustomerName) AS LowercaseCustomerName FROM Customers;
	-- SUBSTR(string, start, length)
	SELECT SUBSTR(CustomerName, 2, 5) AS ExtractString FROM Customers;
	SELECT SUBSTR(CustomerName, -5, 5) AS ExtractString;
	-- TRIM
	SELECT TRIM('    SQL Tutorial    ') AS TrimmedString;
	SELECT TRIM(CustomerName) AS TrimmedName;

-- ------------------------------------------------------------------------------

-- Numerical Functions
	-- COUNT
	SELECT COUNT(ProductID) AS NumberOfProducts FROM Products;

	-- SUM
	SELECT SUM(Quantity) AS TotalItemsOrdered FROM OrderDetails;

	-- AVG
	SELECT AVG(Quantity) AS TotalItemsOrdered FROM OrderDetails;

	-- CEIL,CEILING and FLOOR
	SELECT CEIL(Price) AS CeilPrice FROM Products;
	SELECT FLOOR(Price) AS FloorPrice FROM Products;

	-- GREATEST,MAX and LEAST,MIN
	SELECT MAX(Price) AS LargestPrice FROM Products;
	SELECT MIN(Price) AS SmallestPrice FROM Products;

-- ------------------------------------------------------------------------------

-- DATE functions
	-- YEAR,MONTH,DAY,HOUR,MINUTE,SECOND
	SELECT YEAR(CURDATE());
	SELECT MONTH(CURDATE());
	SELECT DAY(CURDATE());
	SELECT HOUR("838:59:59");
	SELECT MINUTE("23:59:59");
	SELECT SECOND("23:59:59");


