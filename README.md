# Libft

El proyecto **Libft** es una parte esencial del currículo de 42, diseñado para desarrollar una biblioteca personalizada en C que implemente funciones estándar y utilidades adicionales. Este proyecto es una introducción al manejo de memoria, cadenas de texto, listas enlazadas y algoritmos básicos.

---

## 🚀 Descripción del Proyecto

Libft consiste en crear una biblioteca propia que contenga:
- Reimplementaciones de funciones estándar de `<string.h>` y `<ctype.h>`.
- Funciones adicionales útiles para el desarrollo de proyectos.
- Funciones para trabajar con listas enlazadas.

---

## 📁 Estructura del Proyecto

```plaintext
libft/
├── srcs/           # Código fuente principal
├── includes/       # Archivos de cabecera
├── Makefile        # Sistema de compilación
└── README.md       # Documentación
```

---

## 🛠️ Instalación y Uso

1. Clona el repositorio:
   ```bash
   git clone https://github.com/cacharri/libft.git
   cd libft
   ```

2. Compila la biblioteca:
   ```bash
   make
   ```

3. Incluye `libft.a` en tus proyectos:
   ```bash
   gcc -o my_program my_program.c libft.a
   ```

---

## 🌟 Funciones Implementadas

### Parte 1: Reimplementaciones de funciones estándar
- **Funciones de cadenas**: `ft_strlen`, `ft_strcpy`, `ft_strdup`, etc.
- **Funciones de memoria**: `ft_memset`, `ft_bzero`, `ft_memcpy`, etc.
- **Funciones de caracteres**: `ft_isalpha`, `ft_toupper`, etc.

### Parte 2: Funciones adicionales
- `ft_substr`, `ft_strjoin`, `ft_split`, etc.
- Funciones útiles para manipulación avanzada de cadenas y memoria.

### Parte 3: Funciones de listas enlazadas
- `ft_lstnew`, `ft_lstadd_front`, `ft_lstdelone`, etc.
- Operaciones básicas para gestionar listas enlazadas.

---

## 🧪 Testing

1. Usa el archivo `main.c` incluido para probar las funciones individualmente:
   ```bash
   gcc -o test main.c libft.a
   ./test
   ```

2. Verifica cada función comparándola con su equivalente estándar (si aplica).

3. Utiliza herramientas como Valgrind para comprobar la correcta gestión de memoria:
   ```bash
   valgrind ./test
   ```

---

## 🌱 Aprendizajes Clave

Este proyecto te ayuda a:
- Comprender las funciones estándar de la biblioteca C.
- Implementar tu propia biblioteca reutilizable.
- Trabajar con estructuras dinámicas como listas enlazadas.
- Gestionar la memoria eficientemente.

---
