
// consultas de datos anexados(juntar tablas externas)
INSERT INTO clientes
SELECT * FROM clientes_madrid

//video 17 modificar tablas
ALTER TABLE ciudades ADD column nombre VARCHAR(255)  
ALTER TABLE clientes ALTER COLUMN fecha DATE


