/* Write your PL/SQL query statement below */
SELECT Name AS Customers
FROM CUSTOMERS
LEFT JOIN ORDERS
ON ORDERS.CustomerID = Customers.Id
WHERE Orders.CustomerID IS NULL