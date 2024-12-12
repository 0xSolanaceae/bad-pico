# GUIDE

## Remark (REM)
**REM** is short for *Remark* and adds a comment to the payload, such as a title, target OS, the functioning of a command, or the author's name.

---

## String (STRING/ALTCODE)
- **STRING** injects keystrokes, or "types", the given characters (*a-z, 0-9, punctuation, and specials*).  
- **ALTCODE** is used instead of STRING to print text using the "ALT+Numpad" method. It works even if a non-US keyboard layout is selected.

---

## Delays
- **DELAY** is expressed in milliseconds (*1 sec. = 1000 ms*).  
  - Minimum: **100 ms** (0.1 sec).  
  - Adjusted in increments of **100 ms**.  
- **DEFAULT_DELAY** / **DEFAULTDELAY** adds a delay before every subsequent command.

---

## Modifier Keys
- **GUI** is used for both:
  - The **WINDOWS (⊞)** key on Windows  
  - The **CMD (⌘)** key on macOS  
- **CONTROL** or **CTRL** are interchangeable.  
- To use more than one modifier key at once, preloaded key combinations are available:

---

## Arrow Keys / Cursor
- **UP** = **UPARROW**  
- **DOWN** = **DOWNARROW**  
- **LEFT** = **LEFTARROW**  
- **RIGHT** = **RIGHTARROW**

---

## Combo Keys
**Windows-specific combinations**:  
- **CTRL-ALT** is the same as typing **ALTgr** (ALT Graphic).  
- **ALT-WINDOWS** = **ALT-GUI**  
- **WINDOWS-SHIFT** = **GUI-SHIFT**

---

## Main Control Keys
- **ENTER** ↵  
- **SPACE** ␣  
- **BACK SPACE** ⌫  
- **TAB** ⇥  
- **CAPS LOCK** ⇪  
- **DELETE** ⌦  

---

## Other Control Keys
- **SysRq** (Linux ONLY): The *magic SysRq key* allows low-level commands regardless of the system's state (useful for system recovery).  
- **PRINT SCREEN**  
- **ESC** ⎋  
- **PAGE UP** ⇞  
- **PAGE DOWN** ⇟  
- **NUM LOCK**  
- **SCROLL LOCK**  
- **HOME** ↖  
- **END** ↘  
- **INSERT**  
- **APP**  
- **BREAK**  
- **PAUSE**  
- **MENU**  
- **ESCAPE**
