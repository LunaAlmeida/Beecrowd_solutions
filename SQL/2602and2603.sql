DROP TABLE IF EXISTS customers;
CREATE TABLE customers (
    id int NOT NULL PRIMARY KEY,
    name varchar(255),
    street varchar(255),
    city varchar(255),
    state char(2),
    credit_limit numeric
);

INSERT INTO customers (id, name, street, city, state, credit_limit) VALUES (1, 'Pedro Augusto da Rocha', 'Rua Pedro Carlos Hoffman', 'Porto Alegre', 'RS', 700.00);
INSERT INTO customers (id, name, street, city, state, credit_limit) VALUES (2, 'Antonio Carlos Mamel', 'Av. Pinheiros', 'Belo Horizonte', 'MG', 3500.50);
INSERT INTO customers (id, name, street, city, state, credit_limit) VALUES (3, 'Luiza Augusta Mhor', 'Rua Salto Grande', 'Niteroi', 'RJ', 4000.00);
INSERT INTO customers (id, name, street, city, state, credit_limit) VALUES (4, 'Jane Ester', 'Av 7 de setembro', 'Erechim', 'RS', 800.00);
INSERT INTO customers (id, name, street, city, state, credit_limit) VALUES (5, 'Marcos Antônio dos Santos', 'Av Farrapos', 'Porto Alegre', 'RS', 4250.25);

SELECT name 
    FROM customers AS c
        WHERE c.state = 'RS';
        
SELECT name, street 
    FROM customers AS c
        WHERE c.city = 'Porto Alegre';


