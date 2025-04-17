# 🖨️ ft_printf - A Custom printf Implementation  

**42 Firenze Project | C Programming**  
*Ricostruzione della funzione `printf()` della libc, con gestione di conversioni base e argomenti variabili.*  

---

## 📋 Specifiche  
✅ **Conversioni Supportate**:  
   - `%c` (carattere)  
   - `%s` (stringa)  
   - `%p` (puntatore esadecimale)  
   - `%d`, `%i` (interi con segno)  
   - `%u` (interi senza segno)  
   - `%x`, `%X` (esadecimale minuscolo/maiuscolo)  
   - `%%` (percentuale)  

✅ **Tecnologie**:  
   - `C` (conforme a C98)  
   - `va_arg` per argomenti variabili  
   - Makefile con regole `all`, `clean`, `fclean`, `re`  

✅ **Conformità**:  
   - Norminette-compliant  
   - Zero memory leaks  
   - Compilazione con `-Wall -Wextra -Werror`  

---

## 🛠 Utilizzo  
```bash
git clone https://github.com/mttgvnrd/ft_printf.git
cd ft_printf
make  # Genera la libreria libftprintf.a
