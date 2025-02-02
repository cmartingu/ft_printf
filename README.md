# 🖨️ ft_printf – Implementación personalizada de printf()

`ft_printf` es una función escrita en C que replica el comportamiento de `printf()`, permitiendo formatear y mostrar texto en la salida estándar.
Este proyecto de 42 refuerza el manejo de punteros, buffers y variadic functions.

## 🚀 Características
- Soporte para formatos básicos: `%c`, `%s`, `%d`, `%i`, `%u`, `%x`, `%X`, `%p`, `%%`.
- Uso de `va_list` para manejar argumentos variables.
- Optimización de la gestión de buffers para mejorar el rendimiento.

## 🛠️ Compilación e instalación
Para compilar `ft_printf`, usa:
```bash
make
```
Esto generará libftprintf.a, que puedes incluir en tu proyecto con:
```C
#include "ft_printf.h"
```
