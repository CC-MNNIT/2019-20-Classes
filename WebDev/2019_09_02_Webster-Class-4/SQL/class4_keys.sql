-- Specify primary key while creating table
CREATE TABLE Persons (
    ID int NOT NULL,
    LastName varchar(255) NOT NULL,
    FirstName varchar(255),
    Age int,
    PRIMARY KEY (ID)
);

-- Make a column primary key by altering the table
ALTER TABLE Persons ADD PRIMARY KEY (ID);

-- Remove primary key
ALTER TABLE Persons DROP PRIMARY KEY;

-- ----------------------------------------------------------------

-- Add a foreign key
CREATE TABLE Orders (
    OrderID int NOT NULL,
    OrderNumber int NOT NULL,
    PersonID int,
    PRIMARY KEY (OrderID),
    FOREIGN KEY (PersonID) REFERENCES Persons(PersonID)
);
-- PersonID must be the primary key of Persons table

-- Add foreign key by altering the table
ALTER TABLE Orders
ADD CONSTRAINT FK_PersonOrder
FOREIGN KEY (PersonID) REFERENCES Persons(PersonID);

-- Remove foreign key
ALTER TABLE Orders DROP FOREIGN KEY FK_PersonOrder;

-- ----------------------------------------------------------------

-- ON DELETE and ON UPDATE cascade
CREATE TABLE Orders (
    OrderID int NOT NULL,
    OrderNumber int NOT NULL,
    PersonID int,
    PRIMARY KEY (OrderID),
    FOREIGN KEY (PersonID) REFERENCES Persons(PersonID)
    ON DELETE CASCADE
    ON UPDATE CASCADE
)ENGINE=INNODB;


