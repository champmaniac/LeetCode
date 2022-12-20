SELECT DISTINCT stock_name, SUM(IF(operation='Buy',-price,price)) OVER(PARTITION BY stock_name) AS 
'capital_gain_loss' 
FROM stocks;