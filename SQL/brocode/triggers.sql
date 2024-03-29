CREATE TRIGGER before_hourly_pay_update
BEFORE UPDATE ON employees 
FOR EACH ROW
SET NEW.salary = (NEW.hourly_pay * 2080);

CREATE TRIGGER before_hourly_pay_insert
BEFORE INSERT ON employees 
FOR EACH ROW
SET NEW.salary = (NEW.hourly_pay * 2080);

CREATE TRIGGER after_salary_delete
AFTER DELETE ON employees 
FOR EACH ROW
UPDATE expenses
SET expense_total = expense_total - OLD.salary
WHERE expense_name = "salaries";

CREATE TRIGGER after_salary_insert
AFTER INSERT ON employees 
FOR EACH ROW
UPDATE expenses
SET expense_total = expense_total + NEW.salary
WHERE expense_name = "salaries";

CREATE TRIGGER after_salary_update
AFTER UPDATE ON employees 
FOR EACH ROW
UPDATE expenses
SET expense_total = expense_total + (NEW.salary - OLD.salary)
WHERE expense_name = "salaries";