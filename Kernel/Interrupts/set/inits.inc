SetGate(0, (void*)ISR0, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(1, (void*)ISR1, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(2, (void*)ISR2, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(3, (void*)ISR3, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(4, (void*)ISR4, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(5, (void*)ISR5, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(6, (void*)ISR6, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(7, (void*)ISR7, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(8, (void*)ISR8, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(9, (void*)ISR9, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(10, (void*)ISR10, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(11, (void*)ISR11, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(12, (void*)ISR12, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(13, (void*)ISR13, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(14, (void*)ISR14, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(15, (void*)ISR15, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
/*
SetGate(16, (void*)ISR16, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(17, (void*)ISR17, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(18, (void*)ISR18, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(19, (void*)ISR19, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(20, (void*)ISR20, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(21, (void*)ISR21, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(22, (void*)ISR22, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(23, (void*)ISR23, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(24, (void*)ISR24, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(25, (void*)ISR25, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(26, (void*)ISR26, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(27, (void*)ISR27, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(28, (void*)ISR28, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(29, (void*)ISR29, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(30, (void*)ISR30, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(31, (void*)ISR31, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(32, (void*)ISR32, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(33, (void*)ISR33, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(34, (void*)ISR34, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(35, (void*)ISR35, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(36, (void*)ISR36, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(37, (void*)ISR37, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(38, (void*)ISR38, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(39, (void*)ISR39, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(40, (void*)ISR40, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(41, (void*)ISR41, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(42, (void*)ISR42, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(43, (void*)ISR43, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(44, (void*)ISR44, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(45, (void*)ISR45, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(46, (void*)ISR46, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(47, (void*)ISR47, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(48, (void*)ISR48, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(49, (void*)ISR49, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(50, (void*)ISR50, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(51, (void*)ISR51, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(52, (void*)ISR52, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(53, (void*)ISR53, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(54, (void*)ISR54, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(55, (void*)ISR55, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(56, (void*)ISR56, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(57, (void*)ISR57, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(58, (void*)ISR58, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(59, (void*)ISR59, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(60, (void*)ISR60, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(61, (void*)ISR61, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(62, (void*)ISR62, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(63, (void*)ISR63, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(64, (void*)ISR64, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(65, (void*)ISR65, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(66, (void*)ISR66, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(67, (void*)ISR67, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(68, (void*)ISR68, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(69, (void*)ISR69, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(70, (void*)ISR70, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(71, (void*)ISR71, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(72, (void*)ISR72, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(73, (void*)ISR73, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(74, (void*)ISR74, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(75, (void*)ISR75, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(76, (void*)ISR76, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(77, (void*)ISR77, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(78, (void*)ISR78, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(79, (void*)ISR79, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(80, (void*)ISR80, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(81, (void*)ISR81, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(82, (void*)ISR82, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(83, (void*)ISR83, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(84, (void*)ISR84, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(85, (void*)ISR85, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(86, (void*)ISR86, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(87, (void*)ISR87, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(88, (void*)ISR88, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(89, (void*)ISR89, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(90, (void*)ISR90, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(91, (void*)ISR91, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(92, (void*)ISR92, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(93, (void*)ISR93, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(94, (void*)ISR94, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(95, (void*)ISR95, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(96, (void*)ISR96, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(97, (void*)ISR97, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(98, (void*)ISR98, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(99, (void*)ISR99, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(100, (void*)ISR100, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(101, (void*)ISR101, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(102, (void*)ISR102, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(103, (void*)ISR103, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(104, (void*)ISR104, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(105, (void*)ISR105, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(106, (void*)ISR106, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(107, (void*)ISR107, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(108, (void*)ISR108, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(109, (void*)ISR109, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(110, (void*)ISR110, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(111, (void*)ISR111, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(112, (void*)ISR112, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(113, (void*)ISR113, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(114, (void*)ISR114, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(115, (void*)ISR115, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(116, (void*)ISR116, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(117, (void*)ISR117, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(118, (void*)ISR118, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(119, (void*)ISR119, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(120, (void*)ISR120, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(121, (void*)ISR121, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(122, (void*)ISR122, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(123, (void*)ISR123, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(124, (void*)ISR124, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(125, (void*)ISR125, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(126, (void*)ISR126, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(127, (void*)ISR127, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(128, (void*)ISR128, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(129, (void*)ISR129, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(130, (void*)ISR130, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(131, (void*)ISR131, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(132, (void*)ISR132, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(133, (void*)ISR133, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(134, (void*)ISR134, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(135, (void*)ISR135, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(136, (void*)ISR136, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(137, (void*)ISR137, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(138, (void*)ISR138, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(139, (void*)ISR139, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(140, (void*)ISR140, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(141, (void*)ISR141, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(142, (void*)ISR142, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(143, (void*)ISR143, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(144, (void*)ISR144, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(145, (void*)ISR145, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(146, (void*)ISR146, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(147, (void*)ISR147, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(148, (void*)ISR148, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(149, (void*)ISR149, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(150, (void*)ISR150, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(151, (void*)ISR151, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(152, (void*)ISR152, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(153, (void*)ISR153, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(154, (void*)ISR154, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(155, (void*)ISR155, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(156, (void*)ISR156, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(157, (void*)ISR157, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(158, (void*)ISR158, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(159, (void*)ISR159, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(160, (void*)ISR160, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(161, (void*)ISR161, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(162, (void*)ISR162, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(163, (void*)ISR163, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(164, (void*)ISR164, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(165, (void*)ISR165, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(166, (void*)ISR166, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(167, (void*)ISR167, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(168, (void*)ISR168, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(169, (void*)ISR169, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(170, (void*)ISR170, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(171, (void*)ISR171, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(172, (void*)ISR172, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(173, (void*)ISR173, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(174, (void*)ISR174, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(175, (void*)ISR175, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(176, (void*)ISR176, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(177, (void*)ISR177, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(178, (void*)ISR178, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(179, (void*)ISR179, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(180, (void*)ISR180, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(181, (void*)ISR181, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(182, (void*)ISR182, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(183, (void*)ISR183, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(184, (void*)ISR184, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(185, (void*)ISR185, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(186, (void*)ISR186, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(187, (void*)ISR187, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(188, (void*)ISR188, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(189, (void*)ISR189, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(190, (void*)ISR190, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(191, (void*)ISR191, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(192, (void*)ISR192, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(193, (void*)ISR193, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(194, (void*)ISR194, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(195, (void*)ISR195, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(196, (void*)ISR196, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(197, (void*)ISR197, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(198, (void*)ISR198, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(199, (void*)ISR199, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(200, (void*)ISR200, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(201, (void*)ISR201, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(202, (void*)ISR202, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(203, (void*)ISR203, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(204, (void*)ISR204, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(205, (void*)ISR205, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(206, (void*)ISR206, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(207, (void*)ISR207, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(208, (void*)ISR208, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(209, (void*)ISR209, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(210, (void*)ISR210, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(211, (void*)ISR211, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(212, (void*)ISR212, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(213, (void*)ISR213, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(214, (void*)ISR214, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(215, (void*)ISR215, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(216, (void*)ISR216, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(217, (void*)ISR217, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(218, (void*)ISR218, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(219, (void*)ISR219, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(220, (void*)ISR220, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(221, (void*)ISR221, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(222, (void*)ISR222, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(223, (void*)ISR223, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(224, (void*)ISR224, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(225, (void*)ISR225, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(226, (void*)ISR226, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(227, (void*)ISR227, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(228, (void*)ISR228, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(229, (void*)ISR229, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(230, (void*)ISR230, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(231, (void*)ISR231, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(232, (void*)ISR232, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(233, (void*)ISR233, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(234, (void*)ISR234, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(235, (void*)ISR235, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(236, (void*)ISR236, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(237, (void*)ISR237, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(238, (void*)ISR238, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(239, (void*)ISR239, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(240, (void*)ISR240, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(241, (void*)ISR241, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(242, (void*)ISR242, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(243, (void*)ISR243, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(244, (void*)ISR244, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(245, (void*)ISR245, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(246, (void*)ISR246, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(247, (void*)ISR247, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(248, (void*)ISR248, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(249, (void*)ISR249, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(250, (void*)ISR250, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(251, (void*)ISR251, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(252, (void*)ISR252, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(253, (void*)ISR253, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(254, (void*)ISR254, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
SetGate(255, (void*)ISR255, 0x08, IDT_FLAG_RING0 | IDT_FLAG_GATE_32BIT_INT);
*/
