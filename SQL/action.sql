
// consultas de datos anexados(juntar tablas externas)
INSERT INTO clientes
SELECT * FROM clientes_madrid

//video 17 modificar tablas
ALTER TABLE ciudades ADD column nombre VARCHAR(255)  
ALTER TABLE clientes ALTER COLUMN fecha DATE

// Triggers ( siempre asociado a una tabla)
// podemos insertar, borrar o eliminar
// per ejemple pa guardar en un altra tabla els datos borrats o actualizats
/A after B before I insert D delete

//mirar row/statement
//pot ser new u old
CREATE TRIGGER PRODUCTOS_AI AFTER INSERT ON PRODUCTOS FOR EACH ROW
INSERT INTO REG_PRODUCTOS(codigo, nombre, precio) VALUES(NEW.codigo, NEW.nombre, NEW.precio);


