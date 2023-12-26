#define primoris main // Function definition
#define primorem main // When referenced in an expression
#define primoris main // When called
#define norma std
#define confratus endl
#define cforas cout

#define haecversio __cplusplus

#define et and
#define assignata_cum_et and_eq
#define tartarus asm
#define coniectatur auto   // Singular declaration
#define coniectantur auto  // Multiple declaration
// bitand
// bitor
#define boolis bool  // Haha genitive of Boole
#define boolum bool  // Multiple declaration
#define boolem bool // Pointer
#define siste break
#define casus case
#define capta catch
#define littera char
#define litterae char  // Multiple declaration
#define litteram char // Pointer
#define genus class
#define utcomplementum compl
#define constans const
#define constantia const  // Multiple declaration
#define constants const // Pointer
#define adconstantem const_cast
#define perge continue
#define defaltam default
#define dele delete
#define repete do
#define continuumissimus double
#define continuumissimi double   // Multiple decl
#define continuumissimum double  // Pointer
// dynamic_cast
#define aliud else
#define enumeratio enum
#define explicatus explicit
#define externus extern
#define externi extern  // Mult decl
#define falsum false    // In assignment
#define falso false     // In equality checking
#define continuum float
#define continua float  // Multiple decl
#define continuo float  // Pointer
#define itera for
#define amicus friend
#define i goto
#define si if
#define reponor inline
#define integer int
#define integeri int   // Mult decl
#define integerum int  // Pointer
// #define int long
#define mutabilis mutable
#define mutabiles mutable  // Multiple decl
#define spatio namespace
#define novus new
// #define non not
#define inaequalis not_eq
#define operator operator
#define vel or
#define assignata_cum_vel or_eq
#define privatus private
#define privati private  // Multiple decl
#define protectus protected
#define protectu protected  // Multiple decl
#define publicus public
#define publici public  // Multiple decl
#define tabula register
#define tabulae register  // Mult decl
#define reinterpretare reinterpret_cast
#define redi return
#define integerulus short
#define integeruli int   // Mult decl
#define integerulum int  // Pointer
#define essenegans signed
#define magnitudinem sizeof
#define pertinax static
#define pertinaces static  // Mult decl
// static_cast
#define structura struct
#define structuram struct // In use of typedef struct
#define respice switch
#define datum template
#define hic this    // When use to call methods
#define ipsum this  // In an expression
#define huius this // When accessing members
#define erige throw
#define verum true  // In assignment
#define vero true   // In equality checking
#define conare try
#define transnomino typedef
#define identitatemgeneris typeid
#define nomengeneris typename
#define unio union
#define nonnegans unsigned
#define per using
#define abstractus virtual
#define abstracti virtual  // Multiple decl
#define inanis void
#define inanem void  // Pointer
#define volaticus volatile
#define volatici volatile  // Multiple decl
#define litterosus wchar_t
#define dum while
#define donec while  // In do-while loops
#define proprius xor
#define assignata_cum_proprius xor_eq

#define plus +
#define minus -       // Binary op
#define negans -      // Unary op
#define multiplica *  // Math op
#define regula *      // Pointer
#define derefer *     // Dereference
#define plusplus ++
#define non !
#define accede ->
#define divide /
#define moduli %
#define aequat ==
#define assignata =
#define maior >
#define minorquam <
#define maioraequalis >=
#define minoraequalis <=
#define dextram >> 
#define sinistram <<

#if haecversio maioraequalis 201103L

#define colorut alignas
#define coloris alignof
#define litteraXVI_t char16_t
#define litteraXXXII_t char32_t
// decltype
#define expressio constexpr
// noexcept
// nullptr
// static_assert
// thread_local
#define finalis final
#define reice override

#endif

#if haecversio maioraequalis 202002L

#define litteraVIII_t char8_t
#define conceptum concept
// consteval
// constinit
#define expecte co_await
// co_return
// co_yield
#define requirit requires
#define importa import
#define modulus module

#endif