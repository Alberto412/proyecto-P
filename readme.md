# PROYECTO P — CONVERSACIÓN ARCHIVO / FUENTE CANÓNICA

## 0. FUNCIÓN DE ESTA CONVERSACIÓN

Esta conversación funciona como **archivo permanente y fuente de verdad de Proyecto P**.

No es, salvo que yo lo pida expresamente, la conversación donde se desarrolla activamente el código ni donde se toman decisiones apresuradas. Su función principal es:

- conservar el estado actual del diseño;
- registrar decisiones nuevas;
- registrar correcciones a decisiones anteriores;
- conservar la evolución del proyecto;
- mantener el estado técnico del código C++;
- almacenar arquitectura, sistemas, mecánicas, roadmap y decisiones visuales;
- distinguir claramente entre:
  - decisiones confirmadas;
  - ideas provisionales;
  - ideas futuras;
  - cosas descartadas;
  - cosas todavía por decidir;
- evitar que información importante se pierda entre conversaciones.

Cuando te pase información procedente de otra conversación de Proyecto P, debes **integrarla en este archivo**.

### Regla principal

**La información más reciente y explícita tiene prioridad sobre decisiones antiguas.**

Si una decisión nueva contradice algo anterior:

1. conserva que antes existía esa idea si históricamente es relevante;
2. marca la anterior como sustituida/descartada;
3. considera la nueva como canónica.

No mezcles ambas como si siguieran vigentes simultáneamente.

---

# 1. COMPORTAMIENTO QUE QUIERO DE ESTA CONVERSACIÓN

Cuando te diga algo como:

- «archiva esto»;
- «actualiza Proyecto P»;
- «esto ha cambiado»;
- «añade esta decisión»;
- «hemos hecho X»;
- «este es el código actual»;

debes incorporarlo al estado canónico.

No hace falta que me devuelvas cada vez un informe gigantesco. Puedes confirmar brevemente qué has actualizado.

Cuando te pida:

- «dame el estado actual»;
- «hazme el informe»;
- «qué habíamos decidido sobre X»;
- «cuál es el código actual»;
- «qué está pendiente»;

debes reconstruir la respuesta utilizando **todo el contenido acumulado en esta conversación**.

No inventes decisiones para rellenar huecos.

Si algo sigue abierto, dilo claramente.

---

# 2. ETIQUETAS DE ESTADO

Cuando resulte útil, clasifica las decisiones como:

### CONFIRMADO

Forma parte actualmente del diseño.

### ABIERTO

Sabemos que existe el problema/sistema, pero todavía no se ha decidido exactamente cómo funciona.

### FUTURO

Idea que interesa, pero no debe condicionar innecesariamente la implementación actual.

### DESCARTADO

Idea que existió pero por ahora se ha eliminado.

### SUSTITUIDO

Existió una decisión anterior y ha sido reemplazada por otra más reciente.

No conviertas automáticamente una idea comentada de pasada en CONFIRMADO.

---

# 3. CONTEXTO DEL DESARROLLADOR

Soy estudiante de DAM y he terminado primero.

Tengo una base decente de Java y programación orientada a objetos. He trabajado con:

- variables;
- funciones;
- condicionales;
- bucles;
- clases;
- objetos;
- encapsulación;
- herencia;
- interfaces;
- clases abstractas;
- colecciones;
- excepciones;
- Spring Boot;
- bases de datos;
- arquitectura básica de aplicaciones.

Llevaba más de cuatro meses sin programar Java seriamente cuando empezó esta reconstrucción, por lo que estaba recuperando soltura.

## Objetivo educativo

Estoy aprendiendo **C++ prácticamente desde cero**, pero no quiero aprender programación desde cero.

Proyecto P será mi principal ruta práctica de aprendizaje de C++.

Quiero aprender específicamente las particularidades reales de C++:

- compilación;
- CMake;
- `.h` / `.cpp`;
- preprocesador;
- `std::string`;
- `std::vector`;
- `struct`;
- clases;
- referencias;
- punteros;
- `const`;
- stack / heap;
- lifetime;
- ownership;
- constructores;
- destructores;
- RAII;
- smart pointers;
- copia;
- movimiento;
- STL;
- enums;
- templates cuando sean necesarios;
- archivos;
- guardado;
- arquitectura idiomática de C++.

No quiero aprender C++ como «Java con sintaxis diferente».

---

# 4. METODOLOGÍA DE APRENDIZAJE

La conversación principal de desarrollo debe seguir esta metodología:

1. Explicarme el concepto de C++ que necesito.
2. Compararlo brevemente con Java cuando ayude.
3. Dar ejemplos pequeños de sintaxis si hacen falta.
4. Darme un objetivo concreto dentro de Proyecto P.
5. Dejar que YO programe.
6. Yo paso mi código.
7. Se revisa:
   - errores;
   - malas prácticas;
   - problemas de diseño;
   - uso de C++ como si fuera Java;
   - copias innecesarias;
   - lifetime;
   - ownership;
   - alternativas mejores.
8. Se continúa al siguiente incremento.

No quiero que ChatGPT genere sistemas completos para que yo los copie salvo que lo pida expresamente.

## Regla arquitectónica

No introducir:

- patrones;
- herencia;
- punteros;
- smart pointers;
- templates;
- abstracciones;
- managers;
- factories;

simplemente «porque hay que aprenderlos».

Primero debe aparecer un problema real y después se introduce la herramienta que lo resuelve.

Ejemplo:

Si esto funciona correctamente:

```cpp
std::vector<Planeta>

```

no convertirlo artificialmente en:

```cpp
std::vector<Planeta*>

```

solo para practicar punteros.

---

# 5. ORIGEN DE PROYECTO P

Proyecto P comenzó anteriormente como un videojuego Java desarrollado con ayuda de ChatGPT gratuito.

Aquella versión terminó siendo:

- incompleta;
- experimental;
- poco estructurada;
- arquitectónicamente inestable;
- formada en gran parte mediante implementaciones locales sin visión global.

Existe un proyecto Java comprimido que se utilizó para analizar las mecánicas originales.

## Papel del proyecto Java

Debe utilizarse para:

- recuperar mecánicas;
- consultar reglas antiguas;
- entender ideas;
- comprobar comportamientos;
- recuperar fórmulas;
- recuperar generación de nombres;
- localizar sistemas que merezcan conservarse.

NO debe considerarse arquitectura correcta.

No se está traduciendo Java a C++.

La reconstrucción C++ es una **versión definitiva rediseñada**.

---

# 6. ANÁLISIS DEL PROTOTIPO JAVA

El prototipo Java tenía alrededor de unas 1000 líneas y contenía principalmente:

- `Main`;
- `Jugador`;
- `Galaxia`;
- `Planetas`;
- `Recursos`;
- `Evento`;
- `Economia`;
- generador de nombres;
- enums de tamaños/recursos.

Implementaba parcialmente:

```text
Generar galaxia
↓
Seleccionar planeta
↓
Investigar
↓
Descubrir recursos
↓
Extraer
↓
Inventario
↓
Vender
↓
Dinero

```

No implementaba realmente:

- navegación completa;
- supervivencia;
- infraestructura;
- casas;
- almacenes;
- sistema económico definitivo;
- guardado;
- modo historia;
- gráficos;
- buena arquitectura.

## Problemas detectados en Java

Entre otros:

- `Jugador` acumulaba demasiadas responsabilidades;
- el turno pertenecía al jugador;
- economía y tiempo estaban desconectados;
- mirar un planeta equivalía prácticamente a visitarlo;
- la posición actual se guardaba mediante coordenadas sueltas;
- cada unidad individual de recurso contenía precio/demanda;
- economía modificaba solo recursos que estaban en inventario;
- eventos estaban desconectados;
- lógica e interfaz estaban mezcladas mediante `System.out`;
- getters y setters permitían estados inválidos;
- había variables y sistemas abandonados;
- había cuatro enums separados para tamaños X/Y;
- el sistema de generación de nombres podía generar duplicados por crear un generador nuevo por planeta.

Estas decisiones **no deben trasladarse automáticamente a C++**.

---

# 7. IDENTIDAD ACTUAL DEL JUEGO

Proyecto P es actualmente un:

**juego 2D de estrategia, supervivencia económica, logística espacial, exploración y especulación, predominantemente textual y con interfaz retrofuturista.**

No hay combate.

La complejidad proviene de sistemas interrelacionados, no de gráficos complejos.

---

# 8. MODOS DE JUEGO

## 8.1. SANDBOX — CONFIRMADO

Todo el diseño mecánico definido hasta ahora constituye principalmente el **modo Sandbox**.

Características:

- galaxia procedural;
- libertad;
- supervivencia económica;
- exploración;
- extracción;
- infraestructura;
- mercados;
- especulación;
- eventos;
- no existe actualmente una victoria formal;
- la partida continúa mientras el jugador sobreviva.

---

## 8.2. HISTORIA — FUTURO CONFIRMADO COMO OBJETIVO

Se quiere posteriormente un modo Historia.

Debe reutilizar:

- tiempo;
- galaxia como representación;
- planetas;
- recursos;
- economía;
- extracción;
- supervivencia;
- mercados;
- infraestructura;
- interfaz;
- demás simulación común.

Puede añadir:

- personajes;
- diálogos;
- objetivos;
- eventos guionizados;
- condiciones narrativas;
- lugares especiales;
- progresión narrativa;
- victoria/derrota narrativa.

### IMPORTANTE: generación diferente

Sandbox e Historia **NO compartirán el mismo generador de galaxia**.

Ambos generan galaxias procedurales, pero de manera diferente.

Conceptualmente:

```text
Generador Sandbox
↓
Galaxia

Generador Historia
↓
Galaxia

```

### Sandbox

Generación ampliamente aleatoria.

### Historia

Generación híbrida:

- cosas aleatorias;
- restricciones;
- posiciones/elementos obligatorios;
- necesidades narrativas;
- elementos controlados;
- zonas procedurales alrededor.

No se quiere un único generador lleno de:

```cpp
if (modoHistoria)

```

Los generadores deben ser distintos aunque produzcan el mismo modelo de mundo.

---

# 9. OBJETIVO DE LA PARTIDA SANDBOX

Actualmente no existe una victoria convencional.

La filosofía es:

> sobrevivir un turno/día más.

La partida continúa mientras el jugador pueda mantener la operación.

Originalmente se planteaba acabar cuando no quedaran recursos, pero posteriormente se decidió que los recursos pueden regenerarse, por lo que una partida muy larga puede continuar.

La duración depende del tamaño de la galaxia.

No existe selección manual de semilla.

Cada partida procedural debe ser diferente.

---

# 10. CONDICIONES DE DERROTA

## 10.1. Bancarrota — CONFIRMADO

```text
dinero < 0
→ derrota

```

Tener exactamente 0 no implica automáticamente derrota, pero es una situación peligrosa.

---

## 10.2. Agotamiento de supervivencia — CONFIRMADO

Existen **recursos de supervivencia**.

Representan abstractamente:

- comida;
- agua;
- oxígeno;
- suministros;
- mantenimiento básico de vida.

Se consumen con el tiempo.

Cuando llegan a cero:

```text
SUPERVIVENCIA = 0
↓
ESTADO DE EMERGENCIA

```

No se pierde inmediatamente.

### Emergencia

El jugador recibe una última oportunidad:

- puede realizar un desplazamiento especial;
- se mueve más rápido;
- el desplazamiento cuesta más dinero;
- después de llegar tiene una última oportunidad para conseguir recursos de supervivencia.

Si no consigue reabastecerse:

```text
DERROTA

```

La emergencia no es un turno gratuito para hacer cualquier actividad.

Es específicamente un intento desesperado de alcanzar un punto de abastecimiento.

---

# 11. TIEMPO

El **turno** es la unidad temporal global del juego.

No pertenece al jugador.

Conceptualmente:

```text
PARTIDA
→ turno actual

```

El paso del tiempo hace evolucionar todos los sistemas temporales.

Por ejemplo:

- extractores;
- eventos;
- supervivencia;
- mercado;
- degradación;
- regeneración;
- viajes;
- futuros procesos.

## IMPORTANTE

### Iniciar una extracción NO consume turnos.

La extracción crea un proceso activo.

Posteriormente, cuando pasa tiempo por otras causas, el extractor produce.

```text
INICIAR EXTRACCIÓN
→ coste económico
→ extractor activo
→ NO avanza turno

```

Después:

```text
turno +1
→ extractor produce

turno +1
→ extractor produce

```

---

# 12. ACCIONES TEMPORALES

Actualmente consumen tiempo:

- viajar;
- investigar;
- esperar.

Otras podrían decidirse posteriormente.

Actualmente NO consumen tiempo:

- iniciar extracción;
- consultar mapa;
- consultar inventario;
- leer periódico;
- comprar/vender;
- consultar información.

Construcción todavía puede necesitar decidirse en detalle.

---

# 13. GALAXIA

La galaxia se genera proceduralmente.

Tendrá tamaños por categorías, por ejemplo:

- pequeña;
- mediana;
- grande.

También existirá un concepto de **densidad**.

La cantidad de planetas dependerá de:

```text
tamaño + densidad

```

Los números concretos siguen abiertos.

---

## 13.1. Espacio

La galaxia es bidimensional.

Cada planeta posee posición.

La distancia entre planetas tiene significado jugable.

No hay rutas obligatorias.

Mientras el jugador pueda pagarlo:

> puede viajar al planeta que quiera.

No existe alcance máximo artificial.

---

## 13.2. Distribución

No se exige actualmente distancia mínima entre planetas.

Sí debe evitarse una generación absurda con zonas enormes completamente vacías si perjudican la partida.

Puede haber zonas o sectores en el futuro, pero no están definidos.

---

## 13.3. Viabilidad inicial

Una galaxia recién generada debe ser económicamente viable.

Debe garantizarse como mínimo una oportunidad razonable accesible desde el inicio.

El jugador debe disponer de suficiente dinero para:

- viajar;
- realizar una actividad productiva;
- regresar o alcanzar un punto comercial.

Esto solo evita partidas muertas desde el turno 0.

No impide que el jugador se arruine por malas decisiones.

---

# 14. INICIO DE PARTIDA

El jugador comienza con:

- dinero;
- nave;
- capacidad;
- recursos de supervivencia iniciales.

Las cantidades concretas dependen del futuro balance.

En principio comenzará en una **zona comercial**, probablemente aleatoria.

La galaxia exterior es conocida:

- existen los planetas;
- se conocen sus posiciones.

El interior de los planetas no es conocido inicialmente.

Los mercados no tienen por qué conocerse todos desde el principio.

---

# 15. VIAJE

Viajar consume:

- dinero;
- turnos;
- recursos de supervivencia indirectamente por el paso del tiempo.

No existe combustible independiente porque añadiría complejidad innecesaria.

La fórmula será sencilla:

```text
distancia
↓
turnos
+
coste económico

```

No se busca una simulación espacial realista.

Una vez iniciado un viaje normal:

- no puede cancelarse.

Durante el viaje pueden ocurrir cosas:

- eventos;
- fluctuaciones;
- extractores continúan trabajando;
- recursos abandonados continúan degradándose;
- supervivencia se consume;
- regeneraciones pueden ocurrir.

---

# 16. PLANETAS

Cada planeta tiene conceptualmente:

- identidad;
- posición;
- tamaño;
- tipo;
- peligrosidad;
- mapa interno.

## Tamaño

Afecta principalmente a las dimensiones del mapa.

No determina riqueza.

Puede existir:

```text
planeta grande + pobre

```

o:

```text
planeta pequeño + rico

```

Los planetas pueden estar completamente vacíos.

---

# 17. TIPOS DE PLANETA

CONFIRMADO que existirán.

Todavía no están definidos.

Pueden afectar:

- terreno;
- probabilidades de recursos;
- peligros;
- costes;
- recursos especiales.

Los recursos básicos pueden aparecer en varios tipos.

En el futuro cada tipo podría permitir recursos exclusivos.

---

# 18. PELIGROSIDAD

Existen dos conceptos.

## 18.1. Peligrosidad general

Un planeta peligroso hace que **todas sus extracciones sean más caras**.

## 18.2. Casillas peligrosas

Dentro del mapa pueden existir zonas concretas peligrosas.

Especialmente importante para la extracción a ciegas.

Si el jugador intenta extraer sin investigar y resulta ser una zona peligrosa:

- el coste puede dispararse;
- la apuesta sale muy cara.

---

# 19. MAPA PLANETARIO

Es una rejilla 2D.

Se mantendrá como elemento visual importante.

Aunque el juego tenga ventana gráfica, conceptualmente sigue siendo una rejilla de casillas.

Una casilla puede tener varias capas:

```text
CASILLA
├── terreno
├── accesibilidad
├── peligro
├── recurso
└── construcción

```

No debe representarse internamente simplemente mediante un `char`.

Los símbolos son presentación, no estado real.

---

# 20. TERRENO

Habrá casillas inutilizables.

Dependiendo del tipo de planeta pueden representar:

- agua;
- lava;
- precipicios;
- hielo;
- obstáculos;
- otros impedimentos.

Una casilla inutilizable no puede emplearse normalmente para infraestructura/extracción según corresponda.

---

# 21. RECURSOS

Recursos básicos confirmados:

- diamante;
- oro;
- plata;
- cobre.

Se añadirán más en el futuro.

Estos nombres representan literalmente los minerales.

Orden inicial de rareza:

```text
Diamante
↓
Oro
↓
Plata
↓
Cobre

```

Diamante será inicialmente el más raro.

Cobre el más común.

---

## 21.1. Rareza y valor NO son lo mismo

Rareza geológica y precio económico son independientes.

Aunque el diamante normalmente sea caro, el mercado puede provocar que temporalmente:

```text
diamante < otro recurso

```

en rentabilidad.

---

## 21.2. Aparición

Los recursos NO tienen la misma probabilidad de aparecer.

La probabilidad depende de:

- recurso;
- tipo de planeta;
- riqueza procedural del planeta.

No es obligatorio generar clusters/vetas geométricas complejas.

La distribución puede ser aleatoria.

---

# 22. MINAS

Una casilla con recurso no representa una unidad.

Representa una **mina**.

Una mina tiene conceptualmente:

- tipo de recurso;
- producción mínima por turno;
- producción máxima por turno;
- duración de explotación.

Ejemplo:

```text
Mina de oro

producción: 1–3 oro / turno
duración: 6 turnos

```

Durante CADA turno activo:

```text
produce una cantidad aleatoria entre X e Y

```

No entrega todo al terminar.

---

# 23. INVESTIGACIÓN

Actualmente se mantienen tres estados aproximados.

## Nivel 0

No se conoce el contenido.

## Nivel 1

Se conoce dónde hay minas.

## Nivel 2

Se conoce qué recurso contiene cada mina.

El coste de investigación será fijo.

Queda abierto exactamente cómo se revela:

- terreno;
- peligro;
- accesibilidad.

Pero para construir infraestructura el jugador debe haber investigado al menos lo suficiente para saber si la casilla es utilizable.

---

# 24. EXTRACCIÓN A CIEGAS

CONFIRMADA.

El jugador puede intentar extraer sin investigar.

Si escoge una casilla vacía:

- paga;
- pierde la inversión;
- no obtiene nada.

Si escoge una mina:

- se ha ahorrado la investigación.

Si escoge una zona peligrosa:

- puede sufrir un coste económico enorme.

La investigación es por tanto:

> intercambiar tiempo por información y reducción de riesgo.

---

# 25. EXTRACTORES

Iniciar extracción NO hace pasar el tiempo.

Se crea un proceso activo.

El extractor continúa trabajando aunque el jugador abandone el planeta.

En cada turno:

```text
producción = random(X,Y)

```

hasta que termine su duración.

Puede haber varios extractores trabajando simultáneamente.

---

# 26. RECOGIDA DE RECURSOS

La producción NO se teletransporta al inventario.

Los recursos quedan físicamente en el planeta.

El jugador debe regresar y recogerlos.

Por ejemplo:

```text
Planeta A → 18 cobre pendientes
Planeta B → extractor trabajando
Planeta C → 7 oro pendientes
Jugador → en mercado D

```

La posición de los recursos importa.

---

# 27. DEGRADACIÓN DE RECURSOS ABANDONADOS

Los recursos producidos y dejados sin protección no permanecen eternamente.

Se pierden de forma:

- gradual;
- procedural;
- no instantánea.

No:

```text
30 → 0

```

de golpe.

Más parecido conceptualmente a:

```text
30 → 27 → 23 → 19 → ...

```

La fórmula exacta sigue abierta.

---

# 28. ALMACENES

Se pueden construir almacenes en planetas.

Se construyen sobre una casilla utilizable elegida por el jugador.

Para construir:

- debe saberse que la casilla puede utilizarse.

La capacidad depende de cuánto se pague.

Funciones:

1. almacenamiento remoto;
2. evitar degradación de recursos.

Puede construirse un almacén encima de una casilla con recursos.

En ese caso:

> el jugador sacrifica voluntariamente esa explotación.

Esto permite construir infraestructura incluso en planetas llenos de recursos.

---

# 29. REGENERACIÓN DE RECURSOS

Los recursos planetarios pueden regenerarse después de X turnos para permitir partidas muy largas.

Solo se regenera la capa de recursos.

No se regeneran:

- terreno;
- casas;
- almacenes;
- infraestructura persistente.

Una casilla explotada:

```text
extracción
↓
siguiente regeneración: bloqueada
↓
regeneración posterior: vuelve a poder generar recurso

```

Es decir, no puede reaparecer inmediatamente una mina en el mismo sitio, pero tampoco queda inutilizada para siempre.

Una construcción ocupa la casilla e impide que aparezca recurso allí.

---

# 30. NAVE E INVENTARIO

La nave tiene capacidad máxima.

Será una capacidad relativamente grande para evitar micromanagement excesivo, pero debe importar.

El inventario representa cantidades:

```text
Diamante: X
Oro: X
Plata: X
Cobre: X

```

NO objetos individuales por cada unidad.

Ocupan capacidad:

- recursos comerciales;
- recursos de supervivencia;
- ciertos objetos/constructores.

Esto genera una decisión:

```text
más supervivencia
→ más autonomía
→ menos espacio comercial

```

---

# 31. RECURSOS DE SUPERVIVENCIA

Se compran en mercados.

Ocupan espacio real de la nave.

El jugador debe decidir cuántos transportar.

Muchos:

- mayor autonomía;
- menor capacidad comercial.

Pocos:

- mayor espacio comercial;
- mayor dependencia de mercados/casas.

---

# 32. CASAS

En los mercados puede comprarse un **constructor de casa** o kit equivalente.

Es consumible.

Se transporta en la nave.

Se utiliza sobre una casilla válida.

La casa ocupa permanentemente esa casilla.

---

## 32.1. Función de la casa

Mientras estás en una casa:

> los recursos necesarios para vivir allí son ilimitados.

Es un punto autosuficiente.

Pero la casa NO permite cargar recursos de supervivencia infinitos en la nave.

Al marcharte:

```text
máximo X recursos de supervivencia

```

Esto mantiene la importancia de la autonomía.

Las casas permiten crear una red logística creada por el jugador.

Ejemplo:

```text
Mercado
↓
Casa A
↓
Casa B
↓
Zona minera remota

```

La infraestructura funciona como una forma de progresión.

---

# 33. COLONIAS

DESCARTADO TEMPORALMENTE.

Existía una idea antigua de colonización y costes asociados.

Por ahora NO forma parte del diseño.

Casas y almacenes sustituyen gran parte de esa necesidad mediante infraestructura concreta.

---

# 34. MERCADOS

Hay determinados planetas/zonas comerciales.

Permiten:

- comprar;
- vender;
- comprar supervivencia;
- comprar constructores;
- adquirir futura infraestructura.

---

## 34.1. Mercados conectados pero diferentes

Los mercados comparten una economía galáctica, pero tienen ligeras diferencias locales.

Ejemplo:

```text
             COBRE    ORO
Mercado A      100     310
Mercado B       96     318
Mercado C      104     303

```

Esto se hace para que el mundo parezca más vivo.

---

## 34.2. Especulación

Se puede comprar Y vender.

Por tanto es posible jugar de forma especulativa:

```text
comprar barato
↓
transportar
↓
vender caro

```

La llamada informalmente «run criptobro» debe ser posible.

La extracción no es la única estrategia económica.

---

# 35. ECONOMÍA

La economía no debe ser una simulación extremadamente compleja.

Conceptualmente el precio depende de:

```text
tendencia estructural
+
diferencia local
+
fluctuación normal
+
eventos temporales

```

La fórmula exacta está ABIERTA.

---

# 36. EFECTO PERMANENTE DEL JUGADOR SOBRE EL MERCADO

El mercado tiene memoria.

## Vender demasiado

Vender grandes cantidades de un recurso:

- baja ligeramente y de forma persistente su precio;
- aumenta la probabilidad de eventos relacionados con sobreproducción/exceso de oferta.

## No vender

Pasar suficiente tiempo sin vender un recurso:

- aumenta ligeramente y de forma persistente su precio;
- favorece probabilísticamente eventos de escasez.

El efecto directo debe ser pequeño.

El jugador:

> influye en el mercado, pero no lo controla completamente.

---

# 37. FLUCTUACIONES

Además existen pequeñas fluctuaciones económicas normales.

Son cambios menores y persistentes.

El mercado nunca debe sentirse completamente congelado fuera de eventos.

---

# 38. EVENTOS ECONÓMICOS

Los eventos son modificadores temporales.

Existen dos grandes orígenes.

## Endógenos

Favorecidos probabilísticamente por el comportamiento del jugador.

Ejemplo:

```text
inundas mercado de cobre
↓
más probabilidad de sobreproducción/saturación

```

## Exógenos

Independientes del jugador.

Por ejemplo:

- accidente minero;
- descubrimiento tecnológico;
- guerra industrial;
- interrupción comercial;
- aumento inesperado de demanda.

---

# 39. COMPATIBILIDAD DE EVENTOS

Puede haber varios eventos simultáneos.

Puede haber varios eventos sobre un mismo recurso si no son contradictorios.

Ejemplo permitido:

```text
oro ↑
oro ↑

```

Ejemplo normalmente no permitido:

```text
escasez extrema
+
sobreproducción extrema

```

Cuando termina el evento:

```text
su modificador desaparece

```

El efecto permanente del mercado NO desaparece.

---

# 40. MODIFICADOR DE EVENTOS

El modificador de un evento no tiene por qué mantenerse constante.

Puede fluctuar durante su duración.

El jugador no debe conocer exactamente:

- porcentaje;
- duración;
- evolución futura.

---

# 41. PERIÓDICO

CONFIRMADO como parte importante de la identidad del juego.

Los eventos se presentan mediante un intento de periódico dentro de la interfaz.

No debe mostrarse algo puramente técnico como:

```text
ORO +27.42 %
DURACIÓN 8

```

Debe presentarse mediante noticias.

Ejemplo:

```text
TENSIÓN EN EL SUMINISTRO DE ORO

Diversas compañías han informado de problemas
para mantener los niveles habituales de suministro...

```

El jugador interpreta:

```text
probablemente oro ↑

```

pero no conoce exactamente cuánto.

---

# 42. INFORMACIÓN ECONÓMICA REMOTA

Desde el periódico se pueden consultar precios aproximados.

Ejemplo conceptual:

```text
Oro: ~300–330
Tendencia: ↑

```

No necesariamente se conoce el precio exacto de todos los mercados desde cualquier planeta.

Esto mantiene información imperfecta.

---

# 43. INTERFAZ / DIRECCIÓN VISUAL

La idea inicial era terminal pura.

Esto fue SUSTITUIDO.

Actualmente se quiere:

> una ventana gráfica 2D sencilla, predominantemente textual, con estética retrofuturista y una organización visual clara.

Debe funcionar con:

- ratón;
- flechas;
- teclado.

No se buscan gráficos complejos.

---

# 44. REFERENCIAS VISUALES

La dirección visual se describió como una mezcla entre:

- ordenador/interfaz de **SUPERHOT**;
- estética retro tecnológica de **SIGNALIS**;
- estructura estratégica/mapa de **Konquest**.

No se pretende copiar ninguno literalmente.

Se busca extraer:

### SUPERHOT

- ordenador/terminal diegético;
- sensación de sistema informático;
- simplicidad extrema;
- interfaz como parte del mundo.

### SIGNALIS

- composición;
- paneles;
- tipografía;
- iconografía;
- paleta limitada;
- estética retro;
- posible ruido/CRT/glitch suave;
- interfaz visual cuidada.

### Konquest

- mapa estratégico;
- objetos seleccionables;
- paneles de información;
- control con ratón;
- navegación sencilla.

---

# 45. IDENTIDAD VISUAL OBJETIVO

No describir Proyecto P como «juego de terminal».

Descripción más correcta:

> **Juego 2D de interfaz retrofuturista, predominantemente textual, con mapas, paneles e iconografía minimalista.**

Ejemplo conceptual:

```text
┌─────────────────────────────────────────────────────────────┐
│ PROYECTO P              TURNO 184   CR 4280   SUP 17/30    │
├──────────────────────────────┬──────────────────────────────┤
│                              │ PLANETA: ASTRAN VII          │
│        MAPA GALÁCTICO        │                              │
│                              │ TIPO: DESÉRTICO              │
│      ○                       │ RIESGO: ▰▰▰□□                │
│                ◉             │ DISTANCIA: 8 T               │
│                         ◇    │                              │
│                              │ [ VIAJAR ]                   │
├──────────────────────────────┴──────────────────────────────┤
│ MAPA | NAVE | OPERACIONES | MERCADO | PRENSA | ARCHIVO     │
└─────────────────────────────────────────────────────────────┘

```

Los recuadros serían gráficos reales, no necesariamente caracteres.

---

# 46. TECNOLOGÍA GRÁFICA PREVISTA

Actualmente la opción preferida es:

**raylib**

Posiblemente complementada parcialmente con `raygui`, pero evitando que toda la interfaz parezca una aplicación de configuración genérica.

Se quieren crear componentes visuales propios simples mediante:

- rectángulos;
- líneas;
- texto;
- iconos mínimos;
- botones;
- paneles;
- listas;
- celdas;
- pestañas;
- tooltips.

Posibles mejoras futuras:

- fuentes propias;
- pequeños iconos;
- transiciones;
- animaciones mínimas;
- shader CRT;
- scanlines;
- ruido;
- glitch puntual;
- viñeta;
- postprocesado.

El apartado visual debe poder dividirse en:

### Nivel 1 — obligatorio

- ventana;
- texto;
- rectángulos;
- paneles;
- mouse;
- teclado;
- mapas.

### Nivel 2 — presentación

- tipografía;
- iconos;
- transiciones;
- paleta;
- pequeños efectos.

### Nivel 3 — pulido opcional

- CRT;
- ruido;
- scanlines;
- glitch;
- shaders.

Así, si Proyecto P se presenta como proyecto final de DAM, puede verse completo sin necesitar assets gráficos complejos.

---

# 47. INTERFAZ DIEGÉTICA

Una dirección especialmente interesante es que:

> La interfaz completa sea el ordenador de la nave.

Entonces las pantallas pueden ser:

- MAPA GALÁCTICO;
- NAVE;
- OPERACIONES;
- EXTRACCIÓN;
- RED DE MERCADOS;
- PRENSA;
- ARCHIVO;
- INFRAESTRUCTURA.

Avisos como:

```text
AUTONOMÍA CRÍTICA
PROTOCOLO DE EMERGENCIA DISPONIBLE

```

forman parte natural del mundo.

En Historia, personajes podrían comunicarse mediante la misma interfaz.

---

# 48. PRINCIPIOS ARQUITECTÓNICOS CONFIRMADOS

## 48.1. Núcleo independiente de la interfaz

La lógica no debe imprimir directamente.

NO:

```cpp
Mercado::vender() {
    std::cout << "...";
}

```

La lógica devuelve/modifica estado.

La UI decide cómo mostrarlo.

Objetivo:

```text
NÚCLEO
↑
├── interfaz provisional
└── raylib

```

sin reescribir la simulación.

---

## 48.2. Mundo separado de generación

La galaxia no debe autogenerarse obligatoriamente en su constructor.

Conceptualmente:

```text
GeneradorSandbox ──┐
                   ├─→ Galaxia
GeneradorHistoria ─┘

```

La galaxia representa el resultado.

No sabe necesariamente cómo nació.

---

## 48.3. Tiempo global

El turno pertenece a la partida/simulación.

No a `Jugador`.

---

## 48.4. Recursos separados del mercado

El recurso `ORO` no conoce su precio.

El mercado/economía conoce el precio del oro.

---

## 48.5. Casilla como objeto real

No usar un carácter como estado fundamental.

La casilla debe poder crecer hacia:

```text
terreno
recurso
peligro
construcción

```

---

## 48.6. Valores antes que punteros

En C++ utilizar objetos por valor mientras no exista razón real para:

- referencia;
- puntero;
- `unique_ptr`;
- `shared_ptr`.

No traducir:

```java
new Planeta()

```

automáticamente a:

```cpp
new Planeta()

```

---

# 49. ESTRUCTURA CONCEPTUAL DEL NÚCLEO

Actualmente:

```text
                  PARTIDA
                     │
       ┌─────────────┼──────────────┐
       │             │              │
     TIEMPO        MUNDO         NAVE/JUGADOR
                     │              │
                  GALAXIA         dinero
                     │            inventario
                  PLANETAS        capacidad
                     │            supervivencia
                    MAPA
                     │
                  CASILLAS
                     │
          terreno / minas / etc.


PARTIDA
├── procesos temporales
├── extracción
└── economía

```

No es todavía un diagrama definitivo de clases.

Es un mapa de responsabilidades.

---

# 50. DEPENDENCIAS QUE SE QUIEREN EVITAR

Evitar:

```text
Planeta → Jugador
Planeta → UI
Recurso → Mercado
Galaxia → Sandbox
Extractor → controlar reloj global
Economía → raylib
Jugador → todos los sistemas

```

Relaciones naturales preferibles:

```text
Galaxia
↓ contiene
Planetas

Planeta
↓ contiene
Mapa

Mapa
↓ contiene
Casillas

Casilla
↓ puede contener
Mina / Construcción / etc.

```

---

# 51. PRIMERA VERSIÓN JUGABLE PREVISTA — 0.1

La 0.1 debe ser una **primera pieza real del juego definitivo**, no un prototipo desechable.

Bucle mínimo previsto:

```text
Crear Sandbox
↓
Generar galaxia
↓
Seleccionar planeta
↓
Viajar
↓
Ver planeta
↓
Investigar o arriesgarse
↓
Iniciar extracción
↓
Hacer avanzar tiempo mediante otras acciones
↓
Extractor produce
↓
Recoger
↓
Volver a mercado
↓
Vender

```

Los sistemas inicialmente pueden ser simples, pero sus responsabilidades deben ser escalables.

---

# 52. COSAS QUE NO NECESITA INCLUIR LA 0.1 INICIALMENTE

Aunque existen en el diseño:

- eventos complejos;
- periódico completo;
- casas;
- almacenes;
- regeneración;
- supervivencia completa;
- economía avanzada;
- modo Historia;
- interfaz gráfica final;
- shaders.

Se añadirán incrementalmente.

Pero la arquitectura debe evitar bloquearlos.

---

# 53. CRITERIO DE ESCALABILIDAD

Escalable NO significa implementar desde el primer día:

```text
AbstractGameSystem
PlanetFactory
IEventStrategy
GenericManager<T>

```

«por si acaso».

Escalable significa que las fronteras fundamentales ya sean correctas.

Ejemplo:

En 0.1:

```text
Casilla
├── terreno
└── recurso opcional

```

Posteriormente:

```text
Casilla
├── terreno
├── recurso
├── peligro
└── construcción

```

Se amplía el mismo concepto.

No se tira y reconstruye.

---

# 54. ESTRUCTURA DE CARPETAS C++ ACORDADA

Proyecto creado con **CLion + CMake**.

Estructura base acordada:

```text
ProyectoP/
│
├── CMakeLists.txt
│
└── src/
    ├── main.cpp
    │
    ├── core/
    ├── world/
    ├── generation/
    ├── economy/
    └── ui/

```

## `core/`

Responsabilidades centrales:

- partida;
- tiempo;
- estado global cuando corresponda.

## `world/`

- Posicion;
- Planeta;
- Galaxia;
- Mapa;
- Casilla;
- Mina;
- etc.

## `generation/`

- GeneradorSandbox;
- posteriormente GeneradorHistoria.

## `economy/`

- Mercado;
- economía;
- eventos económicos;
- precios.

## `ui/`

- presentación;
- posteriormente raylib.

No crear carpetas como:

```text
managers/
utils/
factories/
systems/

```

sin necesidad real.

---

# 55. CMAKE ACORDADO

Base prevista:

```cmake
cmake_minimum_required(VERSION 3.20)

project(ProyectoP)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(ProyectoP
        src/main.cpp
        src/world/Planeta.cpp
)

target_include_directories(ProyectoP PRIVATE src)

```

Se utiliza C++20.

La línea:

```cmake
target_include_directories(ProyectoP PRIVATE src)

```

permite includes del estilo:

```cpp
#include "world/Planeta.h"

```

sin `../../`.

---

# 56. ESTADO ACTUAL DEL APRENDIZAJE C++

Hasta ahora se han introducido:

- compilación conceptual C++;
- CMake básico;
- headers;
- include guards;
- `struct`;
- `class`;
- `private` / `public`;
- `std::string`;
- constructor;
- lista de inicialización;
- `::`;
- métodos `const`;
- referencias `&`;
- `const std::string&`;
- objetos por valor;
- `std::vector`;
- `emplace_back`;
- range-based `for`;
- `const Tipo&` en iteraciones.

Todavía NO se han estudiado formalmente:

- punteros;
- heap;
- ownership profundo;
- smart pointers;
- destructores;
- RAII en profundidad;
- movimiento;
- templates;
- etc.

---

# 57. ARCHIVO ACTUAL: `Posicion.h`

Estado actual:

```cpp
#ifndef PROYECTOP_POSICION_H
#define PROYECTOP_POSICION_H

struct Posicion {
    int x;
    int y;
};

#endif // PROYECTOP_POSICION_H

```

`Posicion` es un `struct` porque actualmente solo agrupa datos sencillos.

No necesita constructor propio.

No necesita getters/setters.

Se crea, por ejemplo:

```cpp
Posicion posicion{2, 3};

```

No se utiliza `new`.

---

# 58. ARCHIVO ACTUAL: `Planeta.h`

Estado conceptual actual:

```cpp
#ifndef PROYECTOP_PLANETA_H
#define PROYECTOP_PLANETA_H

#include "world/Posicion.h"
#include <string>

class Planeta {
private:
    std::string nombre;
    Posicion posicion;

public:
    Planeta(std::string nombre, Posicion posicion);

    const std::string& getNombre() const;
    Posicion getPosicion() const;
};

#endif // PROYECTOP_PLANETA_H

```

Por ahora `Planeta` solo tiene:

- nombre;
- posición.

Se añadirán tamaño, tipo, mapa, peligrosidad, etc. en futuras iteraciones cuando correspondan.

---

# 59. ARCHIVO ACTUAL: `Planeta.cpp`

Estado actual equivalente:

```cpp
#include "Planeta.h"

Planeta::Planeta(std::string nombre, Posicion posicion)
    : nombre(nombre), posicion(posicion) {
}

const std::string& Planeta::getNombre() const {
    return nombre;
}

Posicion Planeta::getPosicion() const {
    return posicion;
}

```

## Conceptos importantes

El constructor utiliza lista de inicialización:

```cpp
: nombre(nombre), posicion(posicion)

```

en lugar de:

```cpp
this->nombre = nombre;

```

El nombre se devuelve mediante:

```cpp
const std::string&

```

para evitar una copia innecesaria y prohibir modificación mediante el getter.

`Posicion` se devuelve por valor porque actualmente solo contiene dos `int` y copiarla es barato.

---

# 60. ESTADO ACTUAL DE `main.cpp`

El último ejercicio completado y corregido es:

```cpp
#include <iostream>
#include <vector>

#include "world/Posicion.h"
#include "world/Planeta.h"

int main() {
    std::vector<Planeta> planetas;

    planetas.emplace_back("XD", Posicion{5, 6});
    planetas.emplace_back("Astra", Posicion{2, 3});
    planetas.emplace_back("Fer9i", Posicion{3, 4});

    for (const Planeta& p : planetas) {
        Posicion pos = p.getPosicion();

        std::cout << p.getNombre()
                  << "--> ("
                  << pos.x
                  << ", "
                  << pos.y
                  << ")\n";
    }

    return 0;
}

```

Este ejercicio funciona.

---

# 61. CONCEPTOS APRENDIDOS EN ESTE ÚLTIMO EJERCICIO

```cpp
std::vector<Planeta> planetas;

```

El vector contiene objetos `Planeta` directamente.

No punteros.

```cpp
planetas.emplace_back("Astra", Posicion{2, 3});

```

Construye el `Planeta` directamente dentro del vector utilizando su constructor.

```cpp
for (const Planeta& p : planetas)

```

Significa:

- `Planeta`: tipo;
- `&`: referencia al objeto real del vector, evitando copiarlo;
- `const`: no modificarlo durante el recorrido;
- `p`: nombre local de la referencia.

---

# 62. PUNTO EXACTO EN EL QUE SE ENCUENTRA EL DESARROLLO

**NO avanzar automáticamente al siguiente paso desde esta conversación archivo.**

La conversación activa de programación acaba de completar:

```text
Posicion
↓
Planeta mínimo
↓
std::vector<Planeta>
↓
recorrido e impresión

```

El siguiente paso previsto en la conversación de desarrollo será probablemente:

> crear `Galaxia`, para que el `std::vector<Planeta>` deje de existir artificialmente dentro de `main` y pase a pertenecer al objeto conceptual correcto.

Pero esta conversación archivo NO debe dar por hecho que ya se ha implementado.

Estado actual:

```text
[COMPLETADO]
Posicion
Planeta mínimo
vector de Planeta en main

[PENDIENTE INMEDIATO]
Galaxia

```

---

# 63. COSAS QUE TODAVÍA ESTÁN ABIERTAS

No tratar como decididas:

- fórmulas concretas de distancia;
- precios;
- dinero inicial;
- consumo exacto de supervivencia;
- capacidades;
- número exacto de planetas;
- categorías exactas de tamaño;
- densidades;
- producción de minas;
- coste de investigación;
- coste de extracción;
- duración de regeneración;
- fórmula de degradación;
- tipos concretos de planeta;
- recursos adicionales;
- peligros concretos;
- coste de casas;
- coste/capacidad de almacenes;
- límite de supervivencia de una casa;
- balance del estado de emergencia;
- fórmula económica;
- frecuencia de eventos;
- nombre definitivo del periódico;
- narrativa;
- personajes;
- objetivos del modo Historia;
- guardado;
- formato de guardado;
- diseño UI definitivo;
- estilo visual final;
- estructura exacta de clases futura.

---

# 64. IDEAS FUTURAS QUE DEBEN QUEDAR EN EL AIRE

Interesan, pero no implementarlas todavía solo por existir:

- más recursos;
- recursos exclusivos;
- nuevos peligros;
- nuevas infraestructuras;
- narrativa;
- personajes;
- diálogos;
- misiones;
- condiciones de victoria;
- otras condiciones de derrota;
- regiones galácticas;
- tipos especiales de planeta.

---

# 65. FILOSOFÍA GENERAL DEL JUEGO

La identidad sistémica actual puede resumirse así:

```text
              INFORMACIÓN
              /         \
             /           \
        LOGÍSTICA ----- ECONOMÍA
             \           /
              \         /
              SUPERVIVENCIA
                    │
                  TIEMPO

```

El juego busca que los sistemas se afecten entre sí.

Ejemplos:

- investigar consume tiempo pero reduce riesgo;
- transportar supervivencia aumenta autonomía pero reduce capacidad comercial;
- viajar consume dinero y tiempo;
- el tiempo modifica mercados y extractores;
- los extractores producen mientras haces otras cosas;
- debes regresar físicamente a por los recursos;
- un almacén protege producción;
- una casa amplía tu radio logístico;
- vender mucho modifica el mercado;
- información económica imperfecta obliga a especular;
- los mercados diferentes permiten arbitraje;
- la infraestructura transforma progresivamente tu relación con la galaxia.

---

# 66. PRINCIPIO DE PROGRESIÓN

Proyecto P no necesita inicialmente niveles tradicionales.

La progresión puede surgir de:

```text
dinero
↓
infraestructura
↓
red logística
↓
mayor autonomía
↓
mejores operaciones
↓
más posibilidades económicas

```

Una partida avanzada debe sentirse diferente porque el jugador ha modificado estratégicamente el mundo.

---

# 67. FRASE CLAVE SOBRE LA ECONOMÍA

Mantener como filosofía:

> **El jugador no controla el mercado, pero el mercado tampoco ignora al jugador.**

---

# 68. FRASE CLAVE SOBRE C++

Mantener como filosofía:

> **Primero aparece el problema; después aprendemos la herramienta de C++ que lo resuelve.**

---

# 69. QUÉ NO HACER EN ESTA CONVERSACIÓN ARCHIVO

No:

- inventar mecánicas;
- asumir que algo pendiente ya está decidido;
- rediseñar sistemas sin que lo pida;
- generar código masivo automáticamente;
- convertir el archivo en tutorial;
- borrar decisiones antiguas relevantes sin registrar que fueron sustituidas;
- confundir el prototipo Java con la versión definitiva;
- asumir que Sandbox e Historia tienen la misma generación;
- volver a describir Proyecto P como una simple terminal;
- introducir combate;
- introducir colonización actualmente;
- decir que iniciar extracción consume turnos.

---

# 70. CÓMO ACTUALIZAR ESTE ARCHIVO

Cuando reciba una actualización:

1. identificar a qué sistema afecta;
2. comprobar si contradice algo anterior;
3. actualizar el estado canónico;
4. marcar cosas anteriores como sustituidas si procede;
5. conservar decisiones abiertas;
6. mantener el punto exacto de implementación C++;
7. actualizar el historial cuando sea útil.

Si recibes código nuevo:

- registra qué archivos existen;
- registra conceptos de C++ ya aprendidos;
- registra qué parte compila;
- no declares completado lo que no haya sido probado.

---

# 71. INFORMES FUTUROS

Cuando pida un informe completo, debería poder estructurarse aproximadamente en:

1. visión general;
2. estado del diseño;
3. Sandbox;
4. Historia;
5. tiempo;
6. galaxia;
7. planetas;
8. recursos;
9. extracción;
10. supervivencia;
11. logística;
12. infraestructura;
13. economía;
14. eventos;
15. periódico;
16. interfaz;
17. arquitectura;
18. estado C++;
19. código actual;
20. roadmap;
21. decisiones abiertas;
22. ideas futuras;
23. cambios desde el informe anterior.

---

# 72. ESTADO CANÓNICO INICIAL DE ESTA CONVERSACIÓN

Este documento representa el estado de Proyecto P a fecha:

**20 de agosto de 2026**

A partir de este punto, cualquier información que yo aporte explícitamente como nueva decisión, implementación o corrección debe considerarse una actualización de este archivo.

Tu función es ayudarme a que Proyecto P tenga **memoria técnica y de diseño consistente durante todo su desarrollo**.