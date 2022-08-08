DROP TABLE IF EXISTS products;
CREATE TABLE products (
    id SERIAL PRIMARY KEY,
    name varchar(255),
    amount numeric,
    price numeric
);

INSERT INTO products (name, amount, price) VALUES ('Two-door wardrobe', 100, 80);
INSERT INTO products (name, amount, price) VALUES ('Dining table', 1000, 560);
INSERT INTO products (name, amount, price) VALUES ('Towel holder', 10000, 5.50);
INSERT INTO products (name, amount, price) VALUES ('Computer desk', 350, 100);
INSERT INTO products (name, amount, price) VALUES ('Chair', 3000, 210.64);
INSERT INTO products (name, amount, price) VALUES ('Single bed', 750, 99);

SELECT id, name
    FROM products AS p
        WHERE p.price NOT BETWEEN 10 AND 100;
