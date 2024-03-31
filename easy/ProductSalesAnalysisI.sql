# Write your MySQL query statement below
select Product.product_name, Sales.price, Sales.year from Sales left join Product on Product.Product_id = Sales.product_id