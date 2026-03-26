# 🏊 C Piscine — C 04

> *Módulo sobre conversión numérica y bases de la C Piscine de 42. ¡Números en todos los formatos!* 🔢

---

## 📋 Información general

| Campo | Detalle |
|---|---|
| 📦 Módulo | C 04 |
| 🔖 Versión | 5 |
| ⚙️ Compilación | `cc -Wall -Wextra -Werror` |
| 📏 Norma | `norminette -R CheckForbiddenSourceHeader` |

---

## ⚠️ Normas importantes

- ✅ Todos los archivos `.c` deben incluir el **header estándar de 42**
- ✅ El código debe cumplir la **Norma de 42**
- ✅ Las funciones **no deben terminar inesperadamente** (segfault, bus error, double free)
- ✅ Solo entregar los archivos indicados en cada ejercicio

---

## 📚 Ejercicios

### ✏️ Ejercicio 00 — `ft_strlen`

| | |
|---|---|
| 📁 Directorio | `ex00/` |
| 📄 Archivo | `ft_strlen.c` |
| 🔧 Funciones autorizadas | Ninguna |

**Objetivo:** Cuenta el número de caracteres de un string y devuelve ese número.

```c
int ft_strlen(char *str);
```

---

### ✏️ Ejercicio 01 — `ft_putstr`

| | |
|---|---|
| 📁 Directorio | `ex01/` |
| 📄 Archivo | `ft_putstr.c` |
| 🔧 Funciones autorizadas | `write` |

**Objetivo:** Muestra en pantalla los caracteres de una cadena de caracteres uno a uno. El puntero apunta al primer carácter.

```c
void ft_putstr(char *str);
```

---

### ✏️ Ejercicio 02 — `ft_putnbr`

| | |
|---|---|
| 📁 Directorio | `ex02/` |
| 📄 Archivo | `ft_putnbr.c` |
| 🔧 Funciones autorizadas | `write` |

**Objetivo:** Muestra un número pasado como parámetro. Debe ser capaz de mostrar **todos los valores posibles de `int`**.

```c
void ft_putnbr(int nb);
```

> 💡 Ejemplo: `ft_putnbr(42)` muestra `"42"`.

---

### ✏️ Ejercicio 03 — `ft_atoi`

| | |
|---|---|
| 📁 Directorio | `ex03/` |
| 📄 Archivo | `ft_atoi.c` |
| 🔧 Funciones autorizadas | Ninguna |

**Objetivo:** Convierte el comienzo del string apuntado por `str` en un entero `int`.

```c
int ft_atoi(char *str);
```

**Reglas:**
- 🔹 Puede empezar con espacios en blanco (`isspace`)
- 🔹 Puede ir seguido de cualquier número de signos `+` y `-` (el número de `-` determina el signo)
- 🔹 Luego lee dígitos en base 10
- 🔹 No es necesario gestionar overflows

**Ejemplo:**
```
./a.out " ---+--+1234ab567"  →  -1234
```

---

### ✏️ Ejercicio 04 — `ft_putnbr_base`

| | |
|---|---|
| 📁 Directorio | `ex04/` |
| 📄 Archivo | `ft_putnbr_base.c` |
| 🔧 Funciones autorizadas | `write` |

**Objetivo:** Muestra un número `int` en una base determinada (pasada como string).

```c
void ft_putnbr_base(int nbr, char *base);
```

**Bases de ejemplo:**
- `"0123456789"` → decimal
- `"01"` → binario
- `"0123456789ABCDEF"` → hexadecimal

**La función no muestra nada si la base tiene errores:**
- ❌ La base está vacía o tiene tamaño 1
- ❌ La base contiene caracteres repetidos
- ❌ La base contiene `+` o `-`

> 💡 La función debe gestionar números negativos.

---

### ✏️ Ejercicio 05 — `ft_atoi_base`

| | |
|---|---|
| 📁 Directorio | `ex05/` |
| 📄 Archivo | `ft_atoi_base.c` |
| 🔧 Funciones autorizadas | Ninguna |

**Objetivo:** Convierte el comienzo del string `str` en `int`, interpretado en la base dada. Se comporta como `ft_atoi` pero en la base especificada.

```c
int ft_atoi_base(char *str, char *base);
```

**Devuelve `0` si la base tiene errores:**
- ❌ Base vacía o de tamaño 1
- ❌ Base contiene caracteres repetidos
- ❌ Base contiene `+`, `-` o espacios

---

## 📦 Entrega

Entrega tu proyecto en tu **repositorio Git**. Solo se evaluará el trabajo del repositorio. Verifica los nombres de los archivos antes de hacer push. 🚀
