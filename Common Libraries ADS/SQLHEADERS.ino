 H      [���      Z   [   �   �   �   �   �    ��������       <  .f       m o t i f   m s w 9 8   m s w 2 0 0 0   m s w 2 0 0 3 
  m s w 2 0 0 3 _ 6 4   m s w x p   m s w x p 6 4   m s w v i s t a   m s w v i s t a _ 6 4 	 	 m s w i n 2 0 0 8  
 m s w i n 2 0 0 8 _ 6 4   m s w i n 7 	  m s w i n 7 _ 6 4   m s w i n 2 0 0 8 r 2   m s w i n 2 0 0 8 r 2 _ 6 4   p a l m   m s w i n 8 	  m s w i n 8 _ 6 4   m s w i n 2 0 1 2 _ 6 4   m s w i n 8 1 
  m s w i n 8 1 _ 6 4   m s w i n 2 0 1 2 r 2 _ 6 4   m s w i n 1 0 
  m s w i n 1 0 _ 6 4   m s w i n 2 0 1 6 _ 6 4   e x p l o r e r 8 _ 0   e x p l o r e r 6 _ D O M 	  e x p l o r e r 7 
  f i r e f o x 1 _ 5 
  f i r e f o x 2 _ 0   n e t s c a p e 7 _ D O M   A O L _ I E             "  """" 'p     s D e c l a r e   S D E C L A R E   @ m y v a r   c h a r ( 2 0 )   Z          "  """"  p     s S e t   S S E T   @ m y v a r   =   ( S E L E C T   Z          "  """" 8p     s F r o m   S F R O M   g x _ d b . d b o . t e s t   W H E R E   s a m p l e _ i d   =   ' s I D '   Z          "  """" p     s W h e r e   S W H E R E   i d   =   @ m y v a r   Z          "  """" p     s O f f s e t   S O F F S E T   0   R O W S   Z          "  """"           "  """" kp     s A s s a y I D   S D E C L A R E   @ a s s a y i d   n v a r c h a r ( 2 0 )   S E T   @ a s s a y i d   =   ( S E L E C T   i d   F R O M   t e s t   W H E R E   s a m p l e _ i d   =   ' s I D ' ) ;   Z          "  """" |p     s A n a l y t e C o u n t   S D E C L A R E   @ c o u n t   i n t   S E T   @ c o u n t   =   ( S E L E C T   C O U N T ( a n a l y t e _ i d )   F R O M   v i e w _ a n a l y t e   W H E R E   a s s a y _ i d   =   @ a s s a y i d ) ;   Z          "  """" �p     s A n a l y t e I D   S D E C L A R E   @ a n a l y t e i d   n v a r c h a r ( 2 0 )   S E T   @ a n a l y t e i d   =   ( S E L E C T   a n a l y t e _ i d   F R O M   v i e w _ a n a l y t e   W H E R E   a s s a y _ i d   =   @ a s s a y i d   O R D E R   B Y   a n a l y t e _ i d   D E S C   O F F S E T   ( @ c o u n t   -   ( @ c o u n t   -   1 ) )   R O W S ) ;   Z          "  """" Pp     s A n a l y t e R e s u l t F r o m   S F R O M   v i e w _ a n a l y t e _ r e s u l t   W H E R E   a n a l y t e _ i d   =   @ a n a l y t e i d   Z          "  """"           "  """" �p     S Q L H E A D E R 0 1      S Q L H E A D E R 0 1   R     s D e c l a r e   A        )      )  s S e t   A        )    t e s t . a s s a y _ i d     )  s F r o m   A        )  ) ;   S E L E C T   n a m e   F R O M   g x _ d b . d b o . a s s a y     )  s W h e r e   A        ) S  Z          "  """" �p     S Q L H E A D E R 0 2      S Q L H E A D E R 0 2   R     s D e c l a r e   A        )      )  s S e t   A        )    t e s t . a s s a y _ i d     )  s F r o m   A        )  ) ;   S E L E C T   v e r s i o n   F R O M   g x _ d b . d b o . a s s a y     )  s W h e r e   A        ) S  Z          "  """" Gp     S Q L H E A D E R 0 3      S Q L H E A D E R 0 3   R  S E L E C T   t e s t . s a m p l e _ i d      s F r o m   A        ) S  Z          "  """" Pp     S Q L H E A D E R 0 4      S Q L H E A D E R 0 4   R  S E L E C T   t e s t . c a r t _ s e r i a l _ n u m b e r      s F r o m   A        ) S  Z          "  """" Hp     S Q L H E A D E R 0 5      S Q L H E A D E R 0 5   R  S E L E C T   t e s t . r g t _ l o t _ i d      s F r o m   A        ) S  Z          "  """" Gp     S Q L H E A D E R 0 6      S Q L H E A D E R 0 6   R  S E L E C T   t e s t . t e s t _ t y p e      s F r o m   A        ) S  Z          "  """" �p     S Q L H E A D E R 0 7      S Q L H E A D E R 0 7   R     s D e c l a r e   A        )      )  s S e t   A        )    t e s t . i d     )  s F r o m   A        )  ) ;   S E L E C T   i n s t r u m e n t _ s e r i a l _ n u m b e r   F R O M   g x _ d b . d b o . t e s t _ d a t a     )  s W h e r e   A        ) S  Z          "  """" �p     S Q L H E A D E R 0 8      S Q L H E A D E R 0 8   R     s D e c l a r e   A        )      )  s S e t   A        )    t e s t . i d     )  s F r o m   A        )  ) ;   S E L E C T   s i t e _ s e r i a l _ n u m b e r   F R O M   g x _ d b . d b o . t e s t _ d a t a     )  s W h e r e   A        ) S  Z          "  """" Hp     S Q L H E A D E R 0 9      S Q L H E A D E R 0 9   R  S E L E C T   t e s t . s w _ v e r s i o n      s F r o m   A        ) S  Z          "  """" Kp     S Q L H E A D E R 1 0      S Q L H E A D E R 1 0   R  S E L E C T   t e s t . c r e a t i o n _ t i m e      s F r o m   A        ) S  Z          "  """" �p     S Q L H E A D E R 1 1      S Q L H E A D E R 1 1   R     s D e c l a r e   A        )      )  s S e t   A        )    t e s t . i d     )  s F r o m   A        )  ) ;   S E L E C T   s t a t e   F R O M   g x _ d b . d b o . t e s t _ d a t a     )  s W h e r e   A        ) S  Z          "  """" Ip     S Q L H E A D E R 1 2      S Q L H E A D E R 1 2   R  S E L E C T   t e s t . r e s u l t _ t e x t      s F r o m   A        ) S  Z          "  """" �p     S Q L H E A D E R 1 3      S Q L H E A D E R 1 3   R     s D e c l a r e   A        )      )  s S e t   A        )    t e s t . a s s a y _ i d     )  s F r o m   A        )  ) ;   S E L E C T   n a m e   F R O M   g x _ d b . d b o . a n a l y t e   W H E R E   p a r e n t _ i d   =   @ m y v a r   O R D E R   B Y   a n a l y t e . i d   A S C     )  s O f f s e t   A        ) S  Z          "  """" �p     S Q L H E A D E R 1 4      S Q L H E A D E R 1 4   R     s D e c l a r e   A        )      )  s S e t   A        )    t e s t . a s s a y _ i d     )  s F r o m   A        )  ) ;   S E L E C T   u s a g e   F R O M   g x _ d b . d b o . a n a l y t e   W H E R E   p a r e n t _ i d   =   @ m y v a r   O R D E R   B Y   a n a l y t e . i d   A S C     )  s O f f s e t   A        ) S  Z          "  """" �p     S Q L H E A D E R 1 5      S Q L H E A D E R 1 5   R     s D e c l a r e   A        )      )  s S e t   A        )    t e s t . a s s a y _ i d     )  s F r o m   A        )  ) ;   S E L E C T   C O N V E R T ( V A R C H A R ( M A X ) ,   t a r g e t , 1 )   F R O M   g x _ d b . d b o . a n a l y t e   W H E R E   p a r e n t _ i d   =   @ m y v a r   O R D E R   B Y   a n a l y t e . i d   A S C     )  s O f f s e t   A        ) S  Z          "  """" �p     S Q L H E A D E R 1 6      S Q L H E A D E R 1 6   R     s A s s a y I D   A        )      )  s A n a l y t e C o u n t   A        )      )  s A n a l y t e I D   A        )    S E L E C T   r e a s o n     )  s A n a l y t e R e s u l t F r o m   A        ) S  Z          "  """" �p     S Q L H E A D E R 1 7      S Q L H E A D E R 1 7   R     s A s s a y I D   A        )      )  s A n a l y t e C o u n t   A        )      )  s A n a l y t e I D   A        )    S E L E C T   c y c l e _ t h r e s h o l d     )  s A n a l y t e R e s u l t F r o m   A        ) S  Z          "  """" �p     S Q L H E A D E R 1 8      S Q L H E A D E R 1 8   R     s A s s a y I D   A        )      )  s A n a l y t e C o u n t   A        )      )  s A n a l y t e I D   A        )    S E L E C T   e n d p o i n t     )  s A n a l y t e R e s u l t F r o m   A        ) S  Z          "  """" �p     S Q L H E A D E R 1 9      S Q L H E A D E R 1 9   R     s A s s a y I D   A        )      )  s A n a l y t e C o u n t   A        )      )  s A n a l y t e I D   A        )    S E L E C T   c u r v e _ f i t _ r e s u l t     )  s A n a l y t e R e s u l t F r o m   A        ) S  Z          "  """" �p     S Q L H E A D E R 2 0      S Q L H E A D E R 2 0   R     s A s s a y I D   A        )      )  s A n a l y t e C o u n t   A        )      )  s A n a l y t e I D   A        )    S E L E C T   d e l t a _ c t     )  s A n a l y t e R e s u l t F r o m   A        ) S  Z          "  """" �p     S Q L H E A D E R 2 1      S Q L H E A D E R 2 1   R     s A s s a y I D   A        )      )  s A n a l y t e C o u n t   A        )      )  s A n a l y t e I D   A        )    S E L E C T   s e c o n d _ d e r i v _ p e a k _ h e i g h t     )  s A n a l y t e R e s u l t F r o m   A        ) S  Z          "  """" �p     S Q L H E A D E R 2 2      S Q L H E A D E R 2 2   R     s A s s a y I D   A        )      )  s A n a l y t e C o u n t   A        )      )  s A n a l y t e I D   A        )    S E L E C T   p r o b e _ c h e c k _ r e a d i n g _ 1     )  s A n a l y t e R e s u l t F r o m   A        ) S  Z          "  """" �p     S Q L H E A D E R 2 3      S Q L H E A D E R 2 3   R     s A s s a y I D   A        )      )  s A n a l y t e C o u n t   A        )      )  s A n a l y t e I D   A        )    S E L E C T   p r o b e _ c h e c k _ r e a d i n g _ 2     )  s A n a l y t e R e s u l t F r o m   A        ) S  Z          "  """" �p     S Q L H E A D E R 2 4      S Q L H E A D E R 2 4   R     s A s s a y I D   A        )      )  s A n a l y t e C o u n t   A        )      )  s A n a l y t e I D   A        )    S E L E C T   p r o b e _ c h e c k _ r e a d i n g _ 3     )  s A n a l y t e R e s u l t F r o m   A        ) S  Z          "  """" �p     S Q L H E A D E R 2 5      S Q L H E A D E R 2 5   R     s A s s a y I D   A        )      )  s A n a l y t e C o u n t   A        )      )  s A n a l y t e I D   A        )    S E L E C T   p r o b e _ c h e c k _ r e s u l t     )  s A n a l y t e R e s u l t F r o m   A        ) S  Z          "  """" p     S Q L H E A D E R 2 6   S   Z          "  """" p     S Q L H E A D E R 2 7   S   Z          "  """" p     S Q L H E A D E R 2 8   S   Z          "  """" p     S Q L H E A D E R 2 9   S   Z          "  """" p     S Q L H E A D E R 3 0   S   Z          "  """" p     S Q L H E A D E R 3 1   S   Z          "  """" p     S Q L H E A D E R 3 2   S   Z          "  """" p     S Q L H E A D E R 3 3   S   Z          "  """" p     S Q L H E A D E R 3 4   S   Z          "  """" p     S Q L H E A D E R 3 5   S   Z          "  """" p     S Q L H E A D E R 3 6   S   Z          "  """" p     S Q L H E A D E R 3 7   S   Z          "  """" p     S Q L H E A D E R 3 8   S   Z          "  """" p     S Q L H E A D E R 3 9   S   Z          "  """" �p     S Q L H E A D E R 4 0      S Q L H E A D E R 4 0   R     s D e c l a r e   A        )      )  s S e t   A        )    t e s t . i d     )  s F r o m   A        )  ) ;   S E L E C T   d e t a i l s   F R O M   g x _ d b . d b o . t e s t _ d a t a _ e r r o r   W H E R E   p a r e n t _ i d   =   @ m y v a r   ) S  Z          "  """" Hp     S Q L H E A D E R 4 1      S Q L H E A D E R 4 1   R  S E L E C T   t e s t . p a t i e n t _ i d      s F r o m   A        ) S  Z          "  """" p     S Q L H E A D E R 4 2   S   Z          "  """" p     S Q L H E A D E R 4 3   S   Z          "  """" p     S Q L H E A D E R 4 4   S   Z          "  """" �p     S Q L H E A D E R 4 5      S Q L H E A D E R 4 5   R     s D e c l a r e   A        )      )  s S e t   A        )    t e s t . u s e r _ i d     )  s F r o m   A        )  ) ;   S E L E C T   f u l l _ n a m e   F R O M   g x _ d b . d b o . u s e r s     )  s W h e r e   A        ) S  Z          "  """" Cp     S Q L H E A D E R 4 6      S Q L H E A D E R 4 6   R  S E L E C T   t e s t . n o t e s      s F r o m   A        ) S  Z          "  """" p     S Q L H E A D E R 4 7   S   Z          "  """" p     S Q L H E A D E R 4 8   S   Z          "  """" p     S Q L H E A D E R 4 9   S   Z 