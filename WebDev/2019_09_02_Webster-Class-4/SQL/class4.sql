-- Create DB
CREATE DATABASE databasename;
--Drop DB
DROP DATABASE databasename;

-- ----------------------------------------------------------------------

-- Create Table
CREATE TABLE table_name (
    column1 datatype,
    column2 datatype,
    column3 datatype,
   ....
);

CREATE TABLE Persons (
    PersonID int,
    LastName varchar(255),
    FirstName varchar(255),
    Address varchar(255),
    City varchar(255) 
);

-- Create Table with constraints
CREATE TABLE table_name (
    column1 datatype constraint,
    column2 datatype constraint,
    column3 datatype constraint,
    ....
);

-- NOT NULL - Ensures that a column cannot have a NULL value
-- UNIQUE - Ensures that all values in a column are different
-- PRIMARY KEY - A combination of a NOT NULL and UNIQUE. Uniquely identifies each row in a table
-- FOREIGN KEY - Uniquely identifies a row/record in another table
-- CHECK - Ensures that all values in a column satisfies a specific condition
-- DEFAULT - Sets a default value for a column when no value is specified
-- INDEX - Used to create and retrieve data from the database very quickly



-- Drop Table
DROP TABLE table_name;
-- Alter Table
	-- Add column
	ALTER TABLE table_name ADD column_name datatype;
	-- Drop column
	ALTER TABLE table_name DROP COLUMN column_name;

-- ----------------------------------------------------------------------

-- Insert Data in table
INSERT INTO table_name (column1, column2, column3, ...) VALUES (value1, value2, value3, ...);
INSERT INTO table_name VALUES (value1, value2, value3, ...);
 
-- Fetch values from table
SELECT column1, column2, ... FROM table_name;
	-- Fetch all columns from table
	SELECT * FROM table_name;
	-- Fetch distinct values
	SELECT DISTINCT column1, column2, ... FROM table_name;
	-- Fetch sorted values from table
	SELECT column1, column2, ... FROM table_name ORDER BY column1, column2, ... ASC|DESC;
	SELECT * FROM Customers ORDER BY Country ASC, CustomerName DESC;
	

-- Update values in table
UPDATE table_name SET column1 = value1, column2 = value2, ... WHERE condition;
UPDATE Customers SET name = 'Venki', City= 'Nashik' WHERE CustomerID = 1;

-- Delete values from table
DELETE FROM table_name WHERE condition;
DELETE FROM Customers WHERE CustomerName='Venki';



-- ----------------------------------------------------------------------
-- Alias
    -- Alias column
    SELECT column_name AS alias_name FROM table_name;
    SELECT CustomerID AS ID, CustomerName AS Customer FROM Customers;
    SELECT CustomerName, Address + ', ' + PostalCode + ' ' + City + ', ' + Country AS FullAddress FROM Customers;
    -- Alias table
    SELECT column_name(s) FROM table_name AS alias_name;
    SELECT o.OrderID, o.OrderDate, c.CustomerName FROM Customers AS c, Orders AS o 
        WHERE c.CustomerName="Around the Horn" AND c.CustomerID=o.CustomerID;



-- ----------------------------------------------------------------------
-- Datatypes
    -- string datatypes
        varchar(size)   -- 1,073,741,824 characters
        text(size)      -- 2GB text data
        nvarchar(size)  -- 536,870,912 characters
        ntext(size)     -- 2gb unicode text
        image           -- 2gb binary data

    -- Integer datatypes
        bit         -- 0,1,NULL
        tinyint     -- 0-255 (1 byte)
        smallint    -- -32,768 and 32,767 (2 bytes)
        int         -- -2,147,483,648 and 2,147,483,647 (4 bytes)
        bigint      -- -9,223,372,036,854,775,808 and 9,223,372,036,854,775,807 (8 bytes)

        float(n)    -- float(n) Floating precision number data from -1.79E + 308 to 1.79E + 308.
                    -- The n parameter indicates whether the field should hold 4 or 8 bytes. 
                    -- float(24) holds a 4-byte field and float(53) holds an 8-byte field. 
                    -- Default value of n is 53. (4 or 8 bytes)

    -- Date datatypes
    datetime        -- From January 1, 1753 to December 31, 9999 with an accuracy of 3.33 milliseconds(8 bytes)
    datetime2       -- From January 1, 0001 to December 31, 9999 with an accuracy of 100 nanoseconds(6-8 bytes)
    smalldatetime   -- From January 1, 1900 to June 6, 2079 with an accuracy of 1 minute(4 bytes)
    date            -- Store a date only. From January 1, 0001 to December 31, 9999(3 bytes)
    time            -- Store a time only to an accuracy of 100 nanoseconds(3-5 bytes)
