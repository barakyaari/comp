#include <stdio.h>
#include <stdlib.h>
#define DO_SHOW 1
#include "arch/cisc.h"
#include "arch/debug_macros.h"
int main() {
#define TRUE 5
#define FALSE 3
#define SOB_NIL 2
#define SOB_VOID 1
#define LOC_ENV 0
#define NUMOFARGS 1
#define SYM_TAB_START 487 
START_MACHINE;
JUMP(LETS_START);
#include "arch/char.lib"
#include "arch/io.lib"
#include "arch/scheme.lib"
#include "arch/math.lib"
#include "arch/string.lib"
#include "arch/system.lib"
#include "arch/project_proc.lib"
ERROR:
HALT;
LETS_START:
PUSH(0);
PUSH(0);
PUSH(0);
PUSH(FP);
MOV(FP, SP);
MOV(IND(0), IMM(804));
MOV(IND(IMM(1)), IMM(937610));
MOV(IND(IMM(2)), IMM(722689));
MOV(IND(IMM(3)), IMM(741553));
MOV(IND(IMM(4)), IMM(0));
MOV(IND(IMM(5)), IMM(741553));
MOV(IND(IMM(6)), IMM(1));
MOV(IND(IMM(10)), IMM(799345));
MOV(IND(IMM(11)), IMM(1));
MOV(IND(IMM(12)), IMM(97));
MOV(IND(IMM(13)), IMM(799345));
MOV(IND(IMM(14)), IMM(3));
MOV(IND(IMM(15)), IMM(109));
MOV(IND(IMM(16)), IMM(97));
MOV(IND(IMM(17)), IMM(112));
MOV(IND(IMM(18)), IMM(799345));
MOV(IND(IMM(19)), IMM(6));
MOV(IND(IMM(20)), IMM(97));
MOV(IND(IMM(21)), IMM(112));
MOV(IND(IMM(22)), IMM(112));
MOV(IND(IMM(23)), IMM(101));
MOV(IND(IMM(24)), IMM(110));
MOV(IND(IMM(25)), IMM(100));
MOV(IND(IMM(26)), IMM(799345));
MOV(IND(IMM(27)), IMM(6));
MOV(IND(IMM(28)), IMM(99));
MOV(IND(IMM(29)), IMM(97));
MOV(IND(IMM(30)), IMM(97));
MOV(IND(IMM(31)), IMM(97));
MOV(IND(IMM(32)), IMM(97));
MOV(IND(IMM(33)), IMM(114));
MOV(IND(IMM(34)), IMM(799345));
MOV(IND(IMM(35)), IMM(6));
MOV(IND(IMM(36)), IMM(99));
MOV(IND(IMM(37)), IMM(100));
MOV(IND(IMM(38)), IMM(100));
MOV(IND(IMM(39)), IMM(100));
MOV(IND(IMM(40)), IMM(100));
MOV(IND(IMM(41)), IMM(114));
MOV(IND(IMM(42)), IMM(799345));
MOV(IND(IMM(43)), IMM(6));
MOV(IND(IMM(44)), IMM(99));
MOV(IND(IMM(45)), IMM(97));
MOV(IND(IMM(46)), IMM(100));
MOV(IND(IMM(47)), IMM(100));
MOV(IND(IMM(48)), IMM(100));
MOV(IND(IMM(49)), IMM(114));
MOV(IND(IMM(50)), IMM(799345));
MOV(IND(IMM(51)), IMM(6));
MOV(IND(IMM(52)), IMM(99));
MOV(IND(IMM(53)), IMM(97));
MOV(IND(IMM(54)), IMM(97));
MOV(IND(IMM(55)), IMM(100));
MOV(IND(IMM(56)), IMM(100));
MOV(IND(IMM(57)), IMM(114));
MOV(IND(IMM(58)), IMM(799345));
MOV(IND(IMM(59)), IMM(6));
MOV(IND(IMM(60)), IMM(99));
MOV(IND(IMM(61)), IMM(97));
MOV(IND(IMM(62)), IMM(97));
MOV(IND(IMM(63)), IMM(97));
MOV(IND(IMM(64)), IMM(100));
MOV(IND(IMM(65)), IMM(114));
MOV(IND(IMM(66)), IMM(799345));
MOV(IND(IMM(67)), IMM(5));
MOV(IND(IMM(68)), IMM(99));
MOV(IND(IMM(69)), IMM(97));
MOV(IND(IMM(70)), IMM(97));
MOV(IND(IMM(71)), IMM(97));
MOV(IND(IMM(72)), IMM(114));
MOV(IND(IMM(73)), IMM(799345));
MOV(IND(IMM(74)), IMM(5));
MOV(IND(IMM(75)), IMM(99));
MOV(IND(IMM(76)), IMM(100));
MOV(IND(IMM(77)), IMM(100));
MOV(IND(IMM(78)), IMM(100));
MOV(IND(IMM(79)), IMM(114));
MOV(IND(IMM(80)), IMM(799345));
MOV(IND(IMM(81)), IMM(5));
MOV(IND(IMM(82)), IMM(99));
MOV(IND(IMM(83)), IMM(97));
MOV(IND(IMM(84)), IMM(100));
MOV(IND(IMM(85)), IMM(100));
MOV(IND(IMM(86)), IMM(114));
MOV(IND(IMM(87)), IMM(799345));
MOV(IND(IMM(88)), IMM(5));
MOV(IND(IMM(89)), IMM(99));
MOV(IND(IMM(90)), IMM(97));
MOV(IND(IMM(91)), IMM(97));
MOV(IND(IMM(92)), IMM(100));
MOV(IND(IMM(93)), IMM(114));
MOV(IND(IMM(94)), IMM(799345));
MOV(IND(IMM(95)), IMM(4));
MOV(IND(IMM(96)), IMM(99));
MOV(IND(IMM(97)), IMM(100));
MOV(IND(IMM(98)), IMM(100));
MOV(IND(IMM(99)), IMM(114));
MOV(IND(IMM(100)), IMM(799345));
MOV(IND(IMM(101)), IMM(4));
MOV(IND(IMM(102)), IMM(99));
MOV(IND(IMM(103)), IMM(97));
MOV(IND(IMM(104)), IMM(100));
MOV(IND(IMM(105)), IMM(114));
MOV(IND(IMM(106)), IMM(799345));
MOV(IND(IMM(107)), IMM(4));
MOV(IND(IMM(108)), IMM(99));
MOV(IND(IMM(109)), IMM(97));
MOV(IND(IMM(110)), IMM(97));
MOV(IND(IMM(111)), IMM(114));
MOV(IND(IMM(112)), IMM(799345));
MOV(IND(IMM(113)), IMM(3));
MOV(IND(IMM(114)), IMM(101));
MOV(IND(IMM(115)), IMM(113));
MOV(IND(IMM(116)), IMM(63));
MOV(IND(IMM(117)), IMM(799345));
MOV(IND(IMM(118)), IMM(14));
MOV(IND(IMM(119)), IMM(115));
MOV(IND(IMM(120)), IMM(116));
MOV(IND(IMM(121)), IMM(114));
MOV(IND(IMM(122)), IMM(105));
MOV(IND(IMM(123)), IMM(110));
MOV(IND(IMM(124)), IMM(103));
MOV(IND(IMM(125)), IMM(45));
MOV(IND(IMM(126)), IMM(62));
MOV(IND(IMM(127)), IMM(115));
MOV(IND(IMM(128)), IMM(121));
MOV(IND(IMM(129)), IMM(109));
MOV(IND(IMM(130)), IMM(98));
MOV(IND(IMM(131)), IMM(111));
MOV(IND(IMM(132)), IMM(108));
MOV(IND(IMM(133)), IMM(799345));
MOV(IND(IMM(134)), IMM(14));
MOV(IND(IMM(135)), IMM(115));
MOV(IND(IMM(136)), IMM(121));
MOV(IND(IMM(137)), IMM(109));
MOV(IND(IMM(138)), IMM(98));
MOV(IND(IMM(139)), IMM(111));
MOV(IND(IMM(140)), IMM(108));
MOV(IND(IMM(141)), IMM(45));
MOV(IND(IMM(142)), IMM(62));
MOV(IND(IMM(143)), IMM(115));
MOV(IND(IMM(144)), IMM(116));
MOV(IND(IMM(145)), IMM(114));
MOV(IND(IMM(146)), IMM(105));
MOV(IND(IMM(147)), IMM(110));
MOV(IND(IMM(148)), IMM(103));
MOV(IND(IMM(149)), IMM(799345));
MOV(IND(IMM(150)), IMM(6));
MOV(IND(IMM(151)), IMM(108));
MOV(IND(IMM(152)), IMM(101));
MOV(IND(IMM(153)), IMM(110));
MOV(IND(IMM(154)), IMM(103));
MOV(IND(IMM(155)), IMM(116));
MOV(IND(IMM(156)), IMM(104));
MOV(IND(IMM(157)), IMM(799345));
MOV(IND(IMM(158)), IMM(5));
MOV(IND(IMM(159)), IMM(97));
MOV(IND(IMM(160)), IMM(112));
MOV(IND(IMM(161)), IMM(112));
MOV(IND(IMM(162)), IMM(108));
MOV(IND(IMM(163)), IMM(121));
MOV(IND(IMM(164)), IMM(799345));
MOV(IND(IMM(165)), IMM(6));
MOV(IND(IMM(166)), IMM(118));
MOV(IND(IMM(167)), IMM(101));
MOV(IND(IMM(168)), IMM(99));
MOV(IND(IMM(169)), IMM(116));
MOV(IND(IMM(170)), IMM(111));
MOV(IND(IMM(171)), IMM(114));
MOV(IND(IMM(172)), IMM(799345));
MOV(IND(IMM(173)), IMM(4));
MOV(IND(IMM(174)), IMM(108));
MOV(IND(IMM(175)), IMM(105));
MOV(IND(IMM(176)), IMM(115));
MOV(IND(IMM(177)), IMM(116));
MOV(IND(IMM(178)), IMM(799345));
MOV(IND(IMM(179)), IMM(8));
MOV(IND(IMM(180)), IMM(115));
MOV(IND(IMM(181)), IMM(101));
MOV(IND(IMM(182)), IMM(116));
MOV(IND(IMM(183)), IMM(45));
MOV(IND(IMM(184)), IMM(99));
MOV(IND(IMM(185)), IMM(97));
MOV(IND(IMM(186)), IMM(114));
MOV(IND(IMM(187)), IMM(33));
MOV(IND(IMM(188)), IMM(799345));
MOV(IND(IMM(189)), IMM(8));
MOV(IND(IMM(190)), IMM(115));
MOV(IND(IMM(191)), IMM(101));
MOV(IND(IMM(192)), IMM(116));
MOV(IND(IMM(193)), IMM(45));
MOV(IND(IMM(194)), IMM(99));
MOV(IND(IMM(195)), IMM(100));
MOV(IND(IMM(196)), IMM(114));
MOV(IND(IMM(197)), IMM(33));
MOV(IND(IMM(198)), IMM(799345));
MOV(IND(IMM(199)), IMM(3));
MOV(IND(IMM(200)), IMM(99));
MOV(IND(IMM(201)), IMM(100));
MOV(IND(IMM(202)), IMM(114));
MOV(IND(IMM(203)), IMM(799345));
MOV(IND(IMM(204)), IMM(3));
MOV(IND(IMM(205)), IMM(99));
MOV(IND(IMM(206)), IMM(97));
MOV(IND(IMM(207)), IMM(114));
MOV(IND(IMM(208)), IMM(799345));
MOV(IND(IMM(209)), IMM(4));
MOV(IND(IMM(210)), IMM(99));
MOV(IND(IMM(211)), IMM(111));
MOV(IND(IMM(212)), IMM(110));
MOV(IND(IMM(213)), IMM(115));
MOV(IND(IMM(214)), IMM(799345));
MOV(IND(IMM(215)), IMM(11));
MOV(IND(IMM(216)), IMM(109));
MOV(IND(IMM(217)), IMM(97));
MOV(IND(IMM(218)), IMM(107));
MOV(IND(IMM(219)), IMM(101));
MOV(IND(IMM(220)), IMM(45));
MOV(IND(IMM(221)), IMM(118));
MOV(IND(IMM(222)), IMM(101));
MOV(IND(IMM(223)), IMM(99));
MOV(IND(IMM(224)), IMM(116));
MOV(IND(IMM(225)), IMM(111));
MOV(IND(IMM(226)), IMM(114));
MOV(IND(IMM(227)), IMM(799345));
MOV(IND(IMM(228)), IMM(11));
MOV(IND(IMM(229)), IMM(118));
MOV(IND(IMM(230)), IMM(101));
MOV(IND(IMM(231)), IMM(99));
MOV(IND(IMM(232)), IMM(116));
MOV(IND(IMM(233)), IMM(111));
MOV(IND(IMM(234)), IMM(114));
MOV(IND(IMM(235)), IMM(45));
MOV(IND(IMM(236)), IMM(115));
MOV(IND(IMM(237)), IMM(101));
MOV(IND(IMM(238)), IMM(116));
MOV(IND(IMM(239)), IMM(33));
MOV(IND(IMM(240)), IMM(799345));
MOV(IND(IMM(241)), IMM(10));
MOV(IND(IMM(242)), IMM(118));
MOV(IND(IMM(243)), IMM(101));
MOV(IND(IMM(244)), IMM(99));
MOV(IND(IMM(245)), IMM(116));
MOV(IND(IMM(246)), IMM(111));
MOV(IND(IMM(247)), IMM(114));
MOV(IND(IMM(248)), IMM(45));
MOV(IND(IMM(249)), IMM(114));
MOV(IND(IMM(250)), IMM(101));
MOV(IND(IMM(251)), IMM(102));
MOV(IND(IMM(252)), IMM(799345));
MOV(IND(IMM(253)), IMM(13));
MOV(IND(IMM(254)), IMM(118));
MOV(IND(IMM(255)), IMM(101));
MOV(IND(IMM(256)), IMM(99));
MOV(IND(IMM(257)), IMM(116));
MOV(IND(IMM(258)), IMM(111));
MOV(IND(IMM(259)), IMM(114));
MOV(IND(IMM(260)), IMM(45));
MOV(IND(IMM(261)), IMM(108));
MOV(IND(IMM(262)), IMM(101));
MOV(IND(IMM(263)), IMM(110));
MOV(IND(IMM(264)), IMM(103));
MOV(IND(IMM(265)), IMM(116));
MOV(IND(IMM(266)), IMM(104));
MOV(IND(IMM(267)), IMM(799345));
MOV(IND(IMM(268)), IMM(11));
MOV(IND(IMM(269)), IMM(109));
MOV(IND(IMM(270)), IMM(97));
MOV(IND(IMM(271)), IMM(107));
MOV(IND(IMM(272)), IMM(101));
MOV(IND(IMM(273)), IMM(45));
MOV(IND(IMM(274)), IMM(115));
MOV(IND(IMM(275)), IMM(116));
MOV(IND(IMM(276)), IMM(114));
MOV(IND(IMM(277)), IMM(105));
MOV(IND(IMM(278)), IMM(110));
MOV(IND(IMM(279)), IMM(103));
MOV(IND(IMM(280)), IMM(799345));
MOV(IND(IMM(281)), IMM(11));
MOV(IND(IMM(282)), IMM(115));
MOV(IND(IMM(283)), IMM(116));
MOV(IND(IMM(284)), IMM(114));
MOV(IND(IMM(285)), IMM(105));
MOV(IND(IMM(286)), IMM(110));
MOV(IND(IMM(287)), IMM(103));
MOV(IND(IMM(288)), IMM(45));
MOV(IND(IMM(289)), IMM(115));
MOV(IND(IMM(290)), IMM(101));
MOV(IND(IMM(291)), IMM(116));
MOV(IND(IMM(292)), IMM(33));
MOV(IND(IMM(293)), IMM(799345));
MOV(IND(IMM(294)), IMM(10));
MOV(IND(IMM(295)), IMM(115));
MOV(IND(IMM(296)), IMM(116));
MOV(IND(IMM(297)), IMM(114));
MOV(IND(IMM(298)), IMM(105));
MOV(IND(IMM(299)), IMM(110));
MOV(IND(IMM(300)), IMM(103));
MOV(IND(IMM(301)), IMM(45));
MOV(IND(IMM(302)), IMM(114));
MOV(IND(IMM(303)), IMM(101));
MOV(IND(IMM(304)), IMM(102));
MOV(IND(IMM(305)), IMM(799345));
MOV(IND(IMM(306)), IMM(13));
MOV(IND(IMM(307)), IMM(115));
MOV(IND(IMM(308)), IMM(116));
MOV(IND(IMM(309)), IMM(114));
MOV(IND(IMM(310)), IMM(105));
MOV(IND(IMM(311)), IMM(110));
MOV(IND(IMM(312)), IMM(103));
MOV(IND(IMM(313)), IMM(45));
MOV(IND(IMM(314)), IMM(108));
MOV(IND(IMM(315)), IMM(101));
MOV(IND(IMM(316)), IMM(110));
MOV(IND(IMM(317)), IMM(103));
MOV(IND(IMM(318)), IMM(116));
MOV(IND(IMM(319)), IMM(104));
MOV(IND(IMM(320)), IMM(799345));
MOV(IND(IMM(321)), IMM(13));
MOV(IND(IMM(322)), IMM(105));
MOV(IND(IMM(323)), IMM(110));
MOV(IND(IMM(324)), IMM(116));
MOV(IND(IMM(325)), IMM(101));
MOV(IND(IMM(326)), IMM(103));
MOV(IND(IMM(327)), IMM(101));
MOV(IND(IMM(328)), IMM(114));
MOV(IND(IMM(329)), IMM(45));
MOV(IND(IMM(330)), IMM(62));
MOV(IND(IMM(331)), IMM(99));
MOV(IND(IMM(332)), IMM(104));
MOV(IND(IMM(333)), IMM(97));
MOV(IND(IMM(334)), IMM(114));
MOV(IND(IMM(335)), IMM(799345));
MOV(IND(IMM(336)), IMM(13));
MOV(IND(IMM(337)), IMM(99));
MOV(IND(IMM(338)), IMM(104));
MOV(IND(IMM(339)), IMM(97));
MOV(IND(IMM(340)), IMM(114));
MOV(IND(IMM(341)), IMM(45));
MOV(IND(IMM(342)), IMM(62));
MOV(IND(IMM(343)), IMM(105));
MOV(IND(IMM(344)), IMM(110));
MOV(IND(IMM(345)), IMM(116));
MOV(IND(IMM(346)), IMM(101));
MOV(IND(IMM(347)), IMM(103));
MOV(IND(IMM(348)), IMM(101));
MOV(IND(IMM(349)), IMM(114));
MOV(IND(IMM(350)), IMM(799345));
MOV(IND(IMM(351)), IMM(10));
MOV(IND(IMM(352)), IMM(112));
MOV(IND(IMM(353)), IMM(114));
MOV(IND(IMM(354)), IMM(111));
MOV(IND(IMM(355)), IMM(99));
MOV(IND(IMM(356)), IMM(101));
MOV(IND(IMM(357)), IMM(100));
MOV(IND(IMM(358)), IMM(117));
MOV(IND(IMM(359)), IMM(114));
MOV(IND(IMM(360)), IMM(101));
MOV(IND(IMM(361)), IMM(63));
MOV(IND(IMM(362)), IMM(799345));
MOV(IND(IMM(363)), IMM(7));
MOV(IND(IMM(364)), IMM(118));
MOV(IND(IMM(365)), IMM(101));
MOV(IND(IMM(366)), IMM(99));
MOV(IND(IMM(367)), IMM(116));
MOV(IND(IMM(368)), IMM(111));
MOV(IND(IMM(369)), IMM(114));
MOV(IND(IMM(370)), IMM(63));
MOV(IND(IMM(371)), IMM(799345));
MOV(IND(IMM(372)), IMM(5));
MOV(IND(IMM(373)), IMM(122));
MOV(IND(IMM(374)), IMM(101));
MOV(IND(IMM(375)), IMM(114));
MOV(IND(IMM(376)), IMM(111));
MOV(IND(IMM(377)), IMM(63));
MOV(IND(IMM(378)), IMM(799345));
MOV(IND(IMM(379)), IMM(7));
MOV(IND(IMM(380)), IMM(115));
MOV(IND(IMM(381)), IMM(116));
MOV(IND(IMM(382)), IMM(114));
MOV(IND(IMM(383)), IMM(105));
MOV(IND(IMM(384)), IMM(110));
MOV(IND(IMM(385)), IMM(103));
MOV(IND(IMM(386)), IMM(63));
MOV(IND(IMM(387)), IMM(799345));
MOV(IND(IMM(388)), IMM(5));
MOV(IND(IMM(389)), IMM(112));
MOV(IND(IMM(390)), IMM(97));
MOV(IND(IMM(391)), IMM(105));
MOV(IND(IMM(392)), IMM(114));
MOV(IND(IMM(393)), IMM(63));
MOV(IND(IMM(394)), IMM(799345));
MOV(IND(IMM(395)), IMM(5));
MOV(IND(IMM(396)), IMM(110));
MOV(IND(IMM(397)), IMM(117));
MOV(IND(IMM(398)), IMM(108));
MOV(IND(IMM(399)), IMM(108));
MOV(IND(IMM(400)), IMM(63));
MOV(IND(IMM(401)), IMM(799345));
MOV(IND(IMM(402)), IMM(5));
MOV(IND(IMM(403)), IMM(99));
MOV(IND(IMM(404)), IMM(104));
MOV(IND(IMM(405)), IMM(97));
MOV(IND(IMM(406)), IMM(114));
MOV(IND(IMM(407)), IMM(63));
MOV(IND(IMM(408)), IMM(799345));
MOV(IND(IMM(409)), IMM(7));
MOV(IND(IMM(410)), IMM(115));
MOV(IND(IMM(411)), IMM(121));
MOV(IND(IMM(412)), IMM(109));
MOV(IND(IMM(413)), IMM(98));
MOV(IND(IMM(414)), IMM(111));
MOV(IND(IMM(415)), IMM(108));
MOV(IND(IMM(416)), IMM(63));
MOV(IND(IMM(417)), IMM(799345));
MOV(IND(IMM(418)), IMM(8));
MOV(IND(IMM(419)), IMM(98));
MOV(IND(IMM(420)), IMM(111));
MOV(IND(IMM(421)), IMM(111));
MOV(IND(IMM(422)), IMM(108));
MOV(IND(IMM(423)), IMM(101));
MOV(IND(IMM(424)), IMM(97));
MOV(IND(IMM(425)), IMM(110));
MOV(IND(IMM(426)), IMM(63));
MOV(IND(IMM(427)), IMM(799345));
MOV(IND(IMM(428)), IMM(8));
MOV(IND(IMM(429)), IMM(105));
MOV(IND(IMM(430)), IMM(110));
MOV(IND(IMM(431)), IMM(116));
MOV(IND(IMM(432)), IMM(101));
MOV(IND(IMM(433)), IMM(103));
MOV(IND(IMM(434)), IMM(101));
MOV(IND(IMM(435)), IMM(114));
MOV(IND(IMM(436)), IMM(63));
MOV(IND(IMM(437)), IMM(799345));
MOV(IND(IMM(438)), IMM(7));
MOV(IND(IMM(439)), IMM(110));
MOV(IND(IMM(440)), IMM(117));
MOV(IND(IMM(441)), IMM(109));
MOV(IND(IMM(442)), IMM(98));
MOV(IND(IMM(443)), IMM(101));
MOV(IND(IMM(444)), IMM(114));
MOV(IND(IMM(445)), IMM(63));
MOV(IND(IMM(446)), IMM(799345));
MOV(IND(IMM(447)), IMM(1));
MOV(IND(IMM(448)), IMM(61));
MOV(IND(IMM(449)), IMM(799345));
MOV(IND(IMM(450)), IMM(1));
MOV(IND(IMM(451)), IMM(62));
MOV(IND(IMM(452)), IMM(799345));
MOV(IND(IMM(453)), IMM(1));
MOV(IND(IMM(454)), IMM(60));
MOV(IND(IMM(455)), IMM(799345));
MOV(IND(IMM(456)), IMM(1));
MOV(IND(IMM(457)), IMM(47));
MOV(IND(IMM(458)), IMM(799345));
MOV(IND(IMM(459)), IMM(1));
MOV(IND(IMM(460)), IMM(42));
MOV(IND(IMM(461)), IMM(799345));
MOV(IND(IMM(462)), IMM(1));
MOV(IND(IMM(463)), IMM(45));
MOV(IND(IMM(464)), IMM(799345));
MOV(IND(IMM(465)), IMM(1));
MOV(IND(IMM(466)), IMM(43));
MOV(IND(IMM(1)), IMM(937610));
MOV(IND(IMM(2)), IMM(722689));
MOV(IND(IMM(3)), IMM(741553));
MOV(IND(IMM(4)), IMM(0));
MOV(IND(IMM(5)), IMM(741553));
MOV(IND(IMM(6)), IMM(1));
MOV(IND(IMM(782)), IMM(181048));
MOV(IND(IMM(783)), IMM(97));
MOV(INDD(487, 0), IMM(368031));
MOV(INDD(487, 1), IMM(490));
MOV(INDD(487, 2), IMM(492));
MOV(INDD(487, 3), IMM(10));
MOV(R0, 0);MOV(INDD(487, 4), R0);
MOV(INDD(492, 0), IMM(368031));
MOV(INDD(492, 1), IMM(495));
MOV(INDD(492, 2), IMM(497));
MOV(INDD(492, 3), IMM(13));
MOV(R0, 0);MOV(INDD(492, 4), R0);
MOV(INDD(497, 0), IMM(368031));
MOV(INDD(497, 1), IMM(500));
MOV(INDD(497, 2), IMM(502));
MOV(INDD(497, 3), IMM(18));
MOV(R0, 0);MOV(INDD(497, 4), R0);
MOV(INDD(502, 0), IMM(368031));
MOV(INDD(502, 1), IMM(505));
MOV(INDD(502, 2), IMM(507));
MOV(INDD(502, 3), IMM(26));
MOV(R0, 0);MOV(INDD(502, 4), R0);
MOV(INDD(507, 0), IMM(368031));
MOV(INDD(507, 1), IMM(510));
MOV(INDD(507, 2), IMM(512));
MOV(INDD(507, 3), IMM(34));
MOV(R0, 0);MOV(INDD(507, 4), R0);
MOV(INDD(512, 0), IMM(368031));
MOV(INDD(512, 1), IMM(515));
MOV(INDD(512, 2), IMM(517));
MOV(INDD(512, 3), IMM(42));
MOV(R0, 0);MOV(INDD(512, 4), R0);
MOV(INDD(517, 0), IMM(368031));
MOV(INDD(517, 1), IMM(520));
MOV(INDD(517, 2), IMM(522));
MOV(INDD(517, 3), IMM(50));
MOV(R0, 0);MOV(INDD(517, 4), R0);
MOV(INDD(522, 0), IMM(368031));
MOV(INDD(522, 1), IMM(525));
MOV(INDD(522, 2), IMM(527));
MOV(INDD(522, 3), IMM(58));
MOV(R0, 0);MOV(INDD(522, 4), R0);
MOV(INDD(527, 0), IMM(368031));
MOV(INDD(527, 1), IMM(530));
MOV(INDD(527, 2), IMM(532));
MOV(INDD(527, 3), IMM(66));
MOV(R0, 0);MOV(INDD(527, 4), R0);
MOV(INDD(532, 0), IMM(368031));
MOV(INDD(532, 1), IMM(535));
MOV(INDD(532, 2), IMM(537));
MOV(INDD(532, 3), IMM(73));
MOV(R0, 0);MOV(INDD(532, 4), R0);
MOV(INDD(537, 0), IMM(368031));
MOV(INDD(537, 1), IMM(540));
MOV(INDD(537, 2), IMM(542));
MOV(INDD(537, 3), IMM(80));
MOV(R0, 0);MOV(INDD(537, 4), R0);
MOV(INDD(542, 0), IMM(368031));
MOV(INDD(542, 1), IMM(545));
MOV(INDD(542, 2), IMM(547));
MOV(INDD(542, 3), IMM(87));
MOV(R0, 0);MOV(INDD(542, 4), R0);
MOV(INDD(547, 0), IMM(368031));
MOV(INDD(547, 1), IMM(550));
MOV(INDD(547, 2), IMM(552));
MOV(INDD(547, 3), IMM(94));
MOV(R0, 0);MOV(INDD(547, 4), R0);
MOV(INDD(552, 0), IMM(368031));
MOV(INDD(552, 1), IMM(555));
MOV(INDD(552, 2), IMM(557));
MOV(INDD(552, 3), IMM(100));
MOV(R0, 0);MOV(INDD(552, 4), R0);
MOV(INDD(557, 0), IMM(368031));
MOV(INDD(557, 1), IMM(560));
MOV(INDD(557, 2), IMM(562));
MOV(INDD(557, 3), IMM(106));
MOV(R0, 0);MOV(INDD(557, 4), R0);
MOV(INDD(562, 0), IMM(368031));
MOV(INDD(562, 1), IMM(565));
MOV(INDD(562, 2), IMM(567));
MOV(INDD(562, 3), IMM(112));
PUSH(LABEL(EQ)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(562, 4), R0);
MOV(INDD(567, 0), IMM(368031));
MOV(INDD(567, 1), IMM(570));
MOV(INDD(567, 2), IMM(572));
MOV(INDD(567, 3), IMM(117));
PUSH(LABEL(STR_TO_SYMBOL)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(567, 4), R0);
MOV(INDD(572, 0), IMM(368031));
MOV(INDD(572, 1), IMM(575));
MOV(INDD(572, 2), IMM(577));
MOV(INDD(572, 3), IMM(133));
PUSH(LABEL(SYMBOL_TO_STR)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(572, 4), R0);
MOV(INDD(577, 0), IMM(368031));
MOV(INDD(577, 1), IMM(580));
MOV(INDD(577, 2), IMM(582));
MOV(INDD(577, 3), IMM(149));
PUSH(LABEL(LIST_LENGTH)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(577, 4), R0);
MOV(INDD(582, 0), IMM(368031));
MOV(INDD(582, 1), IMM(585));
MOV(INDD(582, 2), IMM(587));
MOV(INDD(582, 3), IMM(157));
PUSH(LABEL(APPLY)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(582, 4), R0);
MOV(INDD(587, 0), IMM(368031));
MOV(INDD(587, 1), IMM(590));
MOV(INDD(587, 2), IMM(592));
MOV(INDD(587, 3), IMM(164));
PUSH(LABEL(VECTOR)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(587, 4), R0);
MOV(INDD(592, 0), IMM(368031));
MOV(INDD(592, 1), IMM(595));
MOV(INDD(592, 2), IMM(597));
MOV(INDD(592, 3), IMM(172));
PUSH(LABEL(LIST)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(592, 4), R0);
MOV(INDD(597, 0), IMM(368031));
MOV(INDD(597, 1), IMM(600));
MOV(INDD(597, 2), IMM(602));
MOV(INDD(597, 3), IMM(178));
PUSH(LABEL(SET_CAR)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(597, 4), R0);
MOV(INDD(602, 0), IMM(368031));
MOV(INDD(602, 1), IMM(605));
MOV(INDD(602, 2), IMM(607));
MOV(INDD(602, 3), IMM(188));
PUSH(LABEL(SET_CDR)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(602, 4), R0);
MOV(INDD(607, 0), IMM(368031));
MOV(INDD(607, 1), IMM(610));
MOV(INDD(607, 2), IMM(612));
MOV(INDD(607, 3), IMM(198));
PUSH(LABEL(CDR)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(607, 4), R0);
MOV(INDD(612, 0), IMM(368031));
MOV(INDD(612, 1), IMM(615));
MOV(INDD(612, 2), IMM(617));
MOV(INDD(612, 3), IMM(203));
PUSH(LABEL(CAR)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(612, 4), R0);
MOV(INDD(617, 0), IMM(368031));
MOV(INDD(617, 1), IMM(620));
MOV(INDD(617, 2), IMM(622));
MOV(INDD(617, 3), IMM(208));
PUSH(LABEL(CONS)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(617, 4), R0);
MOV(INDD(622, 0), IMM(368031));
MOV(INDD(622, 1), IMM(625));
MOV(INDD(622, 2), IMM(627));
MOV(INDD(622, 3), IMM(214));
PUSH(LABEL(MAKE_VECTOR)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(622, 4), R0);
MOV(INDD(627, 0), IMM(368031));
MOV(INDD(627, 1), IMM(630));
MOV(INDD(627, 2), IMM(632));
MOV(INDD(627, 3), IMM(227));
PUSH(LABEL(VEC_SET)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(627, 4), R0);
MOV(INDD(632, 0), IMM(368031));
MOV(INDD(632, 1), IMM(635));
MOV(INDD(632, 2), IMM(637));
MOV(INDD(632, 3), IMM(240));
PUSH(LABEL(VEC_REF)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(632, 4), R0);
MOV(INDD(637, 0), IMM(368031));
MOV(INDD(637, 1), IMM(640));
MOV(INDD(637, 2), IMM(642));
MOV(INDD(637, 3), IMM(252));
PUSH(LABEL(VEC_LENGTH)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(637, 4), R0);
MOV(INDD(642, 0), IMM(368031));
MOV(INDD(642, 1), IMM(645));
MOV(INDD(642, 2), IMM(647));
MOV(INDD(642, 3), IMM(267));
PUSH(LABEL(MAKE_STRING)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(642, 4), R0);
MOV(INDD(647, 0), IMM(368031));
MOV(INDD(647, 1), IMM(650));
MOV(INDD(647, 2), IMM(652));
MOV(INDD(647, 3), IMM(280));
PUSH(LABEL(STR_SET)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(647, 4), R0);
MOV(INDD(652, 0), IMM(368031));
MOV(INDD(652, 1), IMM(655));
MOV(INDD(652, 2), IMM(657));
MOV(INDD(652, 3), IMM(293));
PUSH(LABEL(STR_REF)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(652, 4), R0);
MOV(INDD(657, 0), IMM(368031));
MOV(INDD(657, 1), IMM(660));
MOV(INDD(657, 2), IMM(662));
MOV(INDD(657, 3), IMM(305));
PUSH(LABEL(STR_LENGTH)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(657, 4), R0);
MOV(INDD(662, 0), IMM(368031));
MOV(INDD(662, 1), IMM(665));
MOV(INDD(662, 2), IMM(667));
MOV(INDD(662, 3), IMM(320));
PUSH(LABEL(INT_TO_CHAR)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(662, 4), R0);
MOV(INDD(667, 0), IMM(368031));
MOV(INDD(667, 1), IMM(670));
MOV(INDD(667, 2), IMM(672));
MOV(INDD(667, 3), IMM(335));
PUSH(LABEL(CHAR_TO_INT)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(667, 4), R0);
MOV(INDD(672, 0), IMM(368031));
MOV(INDD(672, 1), IMM(675));
MOV(INDD(672, 2), IMM(677));
MOV(INDD(672, 3), IMM(350));
PUSH(LABEL(ISPROCEDURE)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(672, 4), R0);
MOV(INDD(677, 0), IMM(368031));
MOV(INDD(677, 1), IMM(680));
MOV(INDD(677, 2), IMM(682));
MOV(INDD(677, 3), IMM(362));
PUSH(LABEL(ISVECTOR)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(677, 4), R0);
MOV(INDD(682, 0), IMM(368031));
MOV(INDD(682, 1), IMM(685));
MOV(INDD(682, 2), IMM(687));
MOV(INDD(682, 3), IMM(371));
PUSH(LABEL(ISZERO)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(682, 4), R0);
MOV(INDD(687, 0), IMM(368031));
MOV(INDD(687, 1), IMM(690));
MOV(INDD(687, 2), IMM(692));
MOV(INDD(687, 3), IMM(378));
PUSH(LABEL(ISSTRING)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(687, 4), R0);
MOV(INDD(692, 0), IMM(368031));
MOV(INDD(692, 1), IMM(695));
MOV(INDD(692, 2), IMM(697));
MOV(INDD(692, 3), IMM(387));
PUSH(LABEL(ISPAIR)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(692, 4), R0);
MOV(INDD(697, 0), IMM(368031));
MOV(INDD(697, 1), IMM(700));
MOV(INDD(697, 2), IMM(702));
MOV(INDD(697, 3), IMM(394));
PUSH(LABEL(ISNULL)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(697, 4), R0);
MOV(INDD(702, 0), IMM(368031));
MOV(INDD(702, 1), IMM(705));
MOV(INDD(702, 2), IMM(707));
MOV(INDD(702, 3), IMM(401));
PUSH(LABEL(ISCHAR)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(702, 4), R0);
MOV(INDD(707, 0), IMM(368031));
MOV(INDD(707, 1), IMM(710));
MOV(INDD(707, 2), IMM(712));
MOV(INDD(707, 3), IMM(408));
PUSH(LABEL(ISSYMBOL)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(707, 4), R0);
MOV(INDD(712, 0), IMM(368031));
MOV(INDD(712, 1), IMM(715));
MOV(INDD(712, 2), IMM(717));
MOV(INDD(712, 3), IMM(417));
PUSH(LABEL(ISBOOLEAN)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(712, 4), R0);
MOV(INDD(717, 0), IMM(368031));
MOV(INDD(717, 1), IMM(720));
MOV(INDD(717, 2), IMM(722));
MOV(INDD(717, 3), IMM(427));
PUSH(LABEL(ISINTEGER)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(717, 4), R0);
MOV(INDD(722, 0), IMM(368031));
MOV(INDD(722, 1), IMM(725));
MOV(INDD(722, 2), IMM(727));
MOV(INDD(722, 3), IMM(437));
PUSH(LABEL(ISNUMBER)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(722, 4), R0);
MOV(INDD(727, 0), IMM(368031));
MOV(INDD(727, 1), IMM(730));
MOV(INDD(727, 2), IMM(732));
MOV(INDD(727, 3), IMM(446));
PUSH(LABEL(VAR_EQUAL)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(727, 4), R0);
MOV(INDD(732, 0), IMM(368031));
MOV(INDD(732, 1), IMM(735));
MOV(INDD(732, 2), IMM(737));
MOV(INDD(732, 3), IMM(449));
PUSH(LABEL(VAR_GREATERTHAN)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(732, 4), R0);
MOV(INDD(737, 0), IMM(368031));
MOV(INDD(737, 1), IMM(740));
MOV(INDD(737, 2), IMM(742));
MOV(INDD(737, 3), IMM(452));
PUSH(LABEL(VAR_LESSTHAN)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(737, 4), R0);
MOV(INDD(742, 0), IMM(368031));
MOV(INDD(742, 1), IMM(745));
MOV(INDD(742, 2), IMM(747));
MOV(INDD(742, 3), IMM(455));
PUSH(LABEL(VAR_DIV)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(742, 4), R0);
MOV(INDD(747, 0), IMM(368031));
MOV(INDD(747, 1), IMM(750));
MOV(INDD(747, 2), IMM(752));
MOV(INDD(747, 3), IMM(458));
PUSH(LABEL(VAR_MUL)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(747, 4), R0);
MOV(INDD(752, 0), IMM(368031));
MOV(INDD(752, 1), IMM(755));
MOV(INDD(752, 2), IMM(757));
MOV(INDD(752, 3), IMM(461));
PUSH(LABEL(VAR_MIN)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(752, 4), R0);
MOV(INDD(757, 0), IMM(368031));
MOV(INDD(757, 1), IMM(760));
MOV(INDD(757, 2), IMM(762));
MOV(INDD(757, 3), IMM(464));
PUSH(LABEL(VAR_PLUS)) // Push code of label;
PUSH(IMM(0));
CALL(MAKE_SOB_CLOSURE);
DROP(IMM(2));
MOV(INDD(757, 4), R0);
MOV(INDD(757, 2), 2);


/* --- Define: -- */


/* ---------------------------------------------- */
/*               Lambda Code: */
/* ---------------------------------------------- */
/* Malloc 3 for: closure, env and the body. */
PUSH(IMM(3));
CALL(MALLOC);
DROP(IMM(1));

MOV(R10,R0); /* R10 holds Addr of malloc */
MOV(INDD(R10,0), IMM(T_CLOSURE)); /* set T_Closure to location 0 */
/* Malloc(env.size()+1): */
PUSH(IMM(1));
CALL(MALLOC);
DROP(IMM(1));
MOV(R2,R0); /* R2 -> new env addr */
MOV(R3, FPARG(0)); /* R3 = old env adress */
/*Clone the new environment:
for (i = 1, j = 0; j < 0; j++, i++) /* R4 = i, R5 = jMOV(INDD(R2, IMM(i)), INDD(R3, IMM(j)) */;
MOV(R4, IMM(1));
MOV(R5, IMM(0));
LabelEnvLoop29:
CMP(R5,IMM(0));
JUMP_GE(LabelEnvLoopExit29);
MOV(INDD(R2, R4), INDD(R3, R5));
INCR(R4);
INCR(R5);
JUMP(LabelEnvLoop29);
LabelEnvLoopExit29: 
/* Clone the parameters (If needed) - Malloc(params.length): ... */
PUSH(IMM(0));
CALL(MALLOC);
DROP(IMM(1));

MOV(R3, R0); // R3 -> params.addr.. 
/* Loop through parameters and clone them (R5 = 2, R6 is the loop counter): */
MOV(INDD(R2,0), R3);
MOV(R5, IMM(2));
MOV(R6, IMM(0));
Labelparamsoop29:
CMP(R5,IMM(2));
JUMP_GE(LabelparamsoopExit29);
MOV(INDD(R3, R6), FPARG(R5));
//R2[0] -> new parameters
INCR(R5);
INCR(R6);
JUMP(Labelparamsoop29);
LabelparamsoopExit29: 
MOV(INDD(R10, 1), R2); // Parameters copied. the new env is at 1.
MOV(INDD(R10, IMM(2)), LABEL(LabelClosureBody29)); // Append the body
MOV(R0, R10);
JUMP(LabelClosureEnd29);
LabelClosureBody29:
PUSH(FP);
MOV(FP, SP);
/* -- createLambdaSimpleBody -- */
MOV(R1, FPARG(1));
CMP(R1, IMM(1));
JUMP_NE(ERROR);
/* CodeGen:*/


/* ---------------------------------------------- */
/*                  Tail Applic Code: */
/* ---------------------------------------------- */


/* ---------------------------------------------- */
/*                  Applic Code: */
/* ---------------------------------------------- */
/* Compiled params, in reverse order: */
/* --- P-Var: --- */
MOV(R0, FPARG(2));

PUSH(R0);
PUSH(IMM(1)) // Push Num of args;

/* The Compiled Function: */
/* --- F-Var: --- */
MOV(R1, IMM(616)); // Value of Free var bucket.Address
MOV(R2,INDD(R1,0));
MOV(R0,R2);
CMP(INDD(R0,0), IMM(T_CLOSURE));
JUMP_NE(ERROR);
PUSH(INDD(R0, IMM(1)));
CALLA(INDD(R0, IMM(2)));
MOV(R5,STARG(IMM(0))) // R5 = Number of args to drop;
ADD(R5, IMM(2)) // R5 = R5 + env + numOfArgs;
DROP(R5);

PUSH(R0);
 // Compile params and push (in reverse).
/* push number of args. */
PUSH(IMM(1));
/* Compile function and add it's code: */
/* --- F-Var: --- */
MOV(R1, IMM(616)); // Value of Free var bucket.Address
MOV(R2,INDD(R1,0));
MOV(R0,R2);
CMP(INDD(R0,0), IMM(T_CLOSURE)); // Check for errors
JUMP_NE(ERROR);
PUSH(INDD(R0,1)); // Push Environment
PUSH(FPARG(-1)); // Push Ret addr (from current frame)
MOV(R4, IMM(0)); // R4 will be the index
MOV(R6, IMM(2)); // R6 = Old STARG.offset
MOV(R8,FPARG(-2)); // R8 = old FP
MOV(R12,FPARG(1)); // R12 = Old argsCount
MOV(R13,STARG(1)); // R13 = New argsCount
MOV(R5, R12); // R5 = Old FPARG.offset
ADD(R5, IMM(1));
LabelTailLoop26:
CMP(R4, IMM(4));
JUMP_EQ(LabelTailExit26);
MOV(FPARG(R5), STARG(R6));
ADD(R4, IMM(1));
SUB(R5, IMM(1));
SUB(R6, IMM(1));
JUMP(LabelTailLoop26);
LabelTailExit26:
MOV(R9, R13);
SUB(R9, IMM(1));
SUB(R9, R12);
MOV(SP, FP);
ADD(SP, R9);
MOV(FP, R8);
JUMPA(INDD(R0, 2));
/* CodeGen-End*/

POP(FP);
RETURN;
LabelClosureEnd29:

MOV(ADDR(561), R0);
MOV(R0, SOB_VOID);


CALL(PRINT_R0_VALUE);



/* --- Define: -- */


/* ---------------------------------------------- */
/*               Lambda Code: */
/* ---------------------------------------------- */
/* Malloc 3 for: closure, env and the body. */
PUSH(IMM(3));
CALL(MALLOC);
DROP(IMM(1));

MOV(R10,R0); /* R10 holds Addr of malloc */
MOV(INDD(R10,0), IMM(T_CLOSURE)); /* set T_Closure to location 0 */
/* Malloc(env.size()+1): */
PUSH(IMM(1));
CALL(MALLOC);
DROP(IMM(1));
MOV(R2,R0); /* R2 -> new env addr */
MOV(R3, FPARG(0)); /* R3 = old env adress */
/*Clone the new environment:
for (i = 1, j = 0; j < 0; j++, i++) /* R4 = i, R5 = jMOV(INDD(R2, IMM(i)), INDD(R3, IMM(j)) */;
MOV(R4, IMM(1));
MOV(R5, IMM(0));
LabelEnvLoop28:
CMP(R5,IMM(0));
JUMP_GE(LabelEnvLoopExit28);
MOV(INDD(R2, R4), INDD(R3, R5));
INCR(R4);
INCR(R5);
JUMP(LabelEnvLoop28);
LabelEnvLoopExit28: 
/* Clone the parameters (If needed) - Malloc(params.length): ... */
PUSH(IMM(0));
CALL(MALLOC);
DROP(IMM(1));

MOV(R3, R0); // R3 -> params.addr.. 
/* Loop through parameters and clone them (R5 = 2, R6 is the loop counter): */
MOV(INDD(R2,0), R3);
MOV(R5, IMM(2));
MOV(R6, IMM(0));
Labelparamsoop28:
CMP(R5,IMM(2));
JUMP_GE(LabelparamsoopExit28);
MOV(INDD(R3, R6), FPARG(R5));
//R2[0] -> new parameters
INCR(R5);
INCR(R6);
JUMP(Labelparamsoop28);
LabelparamsoopExit28: 
MOV(INDD(R10, 1), R2); // Parameters copied. the new env is at 1.
MOV(INDD(R10, IMM(2)), LABEL(LabelClosureBody28)); // Append the body
MOV(R0, R10);
JUMP(LabelClosureEnd28);
LabelClosureBody28:
PUSH(FP);
MOV(FP, SP);
/* -- createLambdaSimpleBody -- */
MOV(R1, FPARG(1));
CMP(R1, IMM(1));
JUMP_NE(ERROR);
/* CodeGen:*/


/* ---------------------------------------------- */
/*                  Tail Applic Code: */
/* ---------------------------------------------- */


/* ---------------------------------------------- */
/*                  Applic Code: */
/* ---------------------------------------------- */
/* Compiled params, in reverse order: */
/* --- P-Var: --- */
MOV(R0, FPARG(2));

PUSH(R0);
PUSH(IMM(1)) // Push Num of args;

/* The Compiled Function: */
/* --- F-Var: --- */
MOV(R1, IMM(611)); // Value of Free var bucket.Address
MOV(R2,INDD(R1,0));
MOV(R0,R2);
CMP(INDD(R0,0), IMM(T_CLOSURE));
JUMP_NE(ERROR);
PUSH(INDD(R0, IMM(1)));
CALLA(INDD(R0, IMM(2)));
MOV(R5,STARG(IMM(0))) // R5 = Number of args to drop;
ADD(R5, IMM(2)) // R5 = R5 + env + numOfArgs;
DROP(R5);

PUSH(R0);
 // Compile params and push (in reverse).
/* push number of args. */
PUSH(IMM(1));
/* Compile function and add it's code: */
/* --- F-Var: --- */
MOV(R1, IMM(616)); // Value of Free var bucket.Address
MOV(R2,INDD(R1,0));
MOV(R0,R2);
CMP(INDD(R0,0), IMM(T_CLOSURE)); // Check for errors
JUMP_NE(ERROR);
PUSH(INDD(R0,1)); // Push Environment
PUSH(FPARG(-1)); // Push Ret addr (from current frame)
MOV(R4, IMM(0)); // R4 will be the index
MOV(R6, IMM(2)); // R6 = Old STARG.offset
MOV(R8,FPARG(-2)); // R8 = old FP
MOV(R12,FPARG(1)); // R12 = Old argsCount
MOV(R13,STARG(1)); // R13 = New argsCount
MOV(R5, R12); // R5 = Old FPARG.offset
ADD(R5, IMM(1));
LabelTailLoop25:
CMP(R4, IMM(4));
JUMP_EQ(LabelTailExit25);
MOV(FPARG(R5), STARG(R6));
ADD(R4, IMM(1));
SUB(R5, IMM(1));
SUB(R6, IMM(1));
JUMP(LabelTailLoop25);
LabelTailExit25:
MOV(R9, R13);
SUB(R9, IMM(1));
SUB(R9, R12);
MOV(SP, FP);
ADD(SP, R9);
MOV(FP, R8);
JUMPA(INDD(R0, 2));
/* CodeGen-End*/

POP(FP);
RETURN;
LabelClosureEnd28:

MOV(ADDR(556), R0);
MOV(R0, SOB_VOID);


CALL(PRINT_R0_VALUE);



/* --- Define: -- */


/* ---------------------------------------------- */
/*               Lambda Code: */
/* ---------------------------------------------- */
/* Malloc 3 for: closure, env and the body. */
PUSH(IMM(3));
CALL(MALLOC);
DROP(IMM(1));

MOV(R10,R0); /* R10 holds Addr of malloc */
MOV(INDD(R10,0), IMM(T_CLOSURE)); /* set T_Closure to location 0 */
/* Malloc(env.size()+1): */
PUSH(IMM(1));
CALL(MALLOC);
DROP(IMM(1));
MOV(R2,R0); /* R2 -> new env addr */
MOV(R3, FPARG(0)); /* R3 = old env adress */
/*Clone the new environment:
for (i = 1, j = 0; j < 0; j++, i++) /* R4 = i, R5 = jMOV(INDD(R2, IMM(i)), INDD(R3, IMM(j)) */;
MOV(R4, IMM(1));
MOV(R5, IMM(0));
LabelEnvLoop27:
CMP(R5,IMM(0));
JUMP_GE(LabelEnvLoopExit27);
MOV(INDD(R2, R4), INDD(R3, R5));
INCR(R4);
INCR(R5);
JUMP(LabelEnvLoop27);
LabelEnvLoopExit27: 
/* Clone the parameters (If needed) - Malloc(params.length): ... */
PUSH(IMM(0));
CALL(MALLOC);
DROP(IMM(1));

MOV(R3, R0); // R3 -> params.addr.. 
/* Loop through parameters and clone them (R5 = 2, R6 is the loop counter): */
MOV(INDD(R2,0), R3);
MOV(R5, IMM(2));
MOV(R6, IMM(0));
Labelparamsoop27:
CMP(R5,IMM(2));
JUMP_GE(LabelparamsoopExit27);
MOV(INDD(R3, R6), FPARG(R5));
//R2[0] -> new parameters
INCR(R5);
INCR(R6);
JUMP(Labelparamsoop27);
LabelparamsoopExit27: 
MOV(INDD(R10, 1), R2); // Parameters copied. the new env is at 1.
MOV(INDD(R10, IMM(2)), LABEL(LabelClosureBody27)); // Append the body
MOV(R0, R10);
JUMP(LabelClosureEnd27);
LabelClosureBody27:
PUSH(FP);
MOV(FP, SP);
/* -- createLambdaSimpleBody -- */
MOV(R1, FPARG(1));
CMP(R1, IMM(1));
JUMP_NE(ERROR);
/* CodeGen:*/


/* ---------------------------------------------- */
/*                  Tail Applic Code: */
/* ---------------------------------------------- */


/* ---------------------------------------------- */
/*                  Applic Code: */
/* ---------------------------------------------- */
/* Compiled params, in reverse order: */
/* --- P-Var: --- */
MOV(R0, FPARG(2));

PUSH(R0);
PUSH(IMM(1)) // Push Num of args;

/* The Compiled Function: */
/* --- F-Var: --- */
MOV(R1, IMM(611)); // Value of Free var bucket.Address
MOV(R2,INDD(R1,0));
MOV(R0,R2);
CMP(INDD(R0,0), IMM(T_CLOSURE));
JUMP_NE(ERROR);
PUSH(INDD(R0, IMM(1)));
CALLA(INDD(R0, IMM(2)));
MOV(R5,STARG(IMM(0))) // R5 = Number of args to drop;
ADD(R5, IMM(2)) // R5 = R5 + env + numOfArgs;
DROP(R5);

PUSH(R0);
 // Compile params and push (in reverse).
/* push number of args. */
PUSH(IMM(1));
/* Compile function and add it's code: */
/* --- F-Var: --- */
MOV(R1, IMM(611)); // Value of Free var bucket.Address
MOV(R2,INDD(R1,0));
MOV(R0,R2);
CMP(INDD(R0,0), IMM(T_CLOSURE)); // Check for errors
JUMP_NE(ERROR);
PUSH(INDD(R0,1)); // Push Environment
PUSH(FPARG(-1)); // Push Ret addr (from current frame)
MOV(R4, IMM(0)); // R4 will be the index
MOV(R6, IMM(2)); // R6 = Old STARG.offset
MOV(R8,FPARG(-2)); // R8 = old FP
MOV(R12,FPARG(1)); // R12 = Old argsCount
MOV(R13,STARG(1)); // R13 = New argsCount
MOV(R5, R12); // R5 = Old FPARG.offset
ADD(R5, IMM(1));
LabelTailLoop24:
CMP(R4, IMM(4));
JUMP_EQ(LabelTailExit24);
MOV(FPARG(R5), STARG(R6));
ADD(R4, IMM(1));
SUB(R5, IMM(1));
SUB(R6, IMM(1));
JUMP(LabelTailLoop24);
LabelTailExit24:
MOV(R9, R13);
SUB(R9, IMM(1));
SUB(R9, R12);
MOV(SP, FP);
ADD(SP, R9);
MOV(FP, R8);
JUMPA(INDD(R0, 2));
/* CodeGen-End*/

POP(FP);
RETURN;
LabelClosureEnd27:

MOV(ADDR(551), R0);
MOV(R0, SOB_VOID);


CALL(PRINT_R0_VALUE);



/* --- Define: -- */


/* ---------------------------------------------- */
/*               Lambda Code: */
/* ---------------------------------------------- */
/* Malloc 3 for: closure, env and the body. */
PUSH(IMM(3));
CALL(MALLOC);
DROP(IMM(1));

MOV(R10,R0); /* R10 holds Addr of malloc */
MOV(INDD(R10,0), IMM(T_CLOSURE)); /* set T_Closure to location 0 */
/* Malloc(env.size()+1): */
PUSH(IMM(1));
CALL(MALLOC);
DROP(IMM(1));
MOV(R2,R0); /* R2 -> new env addr */
MOV(R3, FPARG(0)); /* R3 = old env adress */
/*Clone the new environment:
for (i = 1, j = 0; j < 0; j++, i++) /* R4 = i, R5 = jMOV(INDD(R2, IMM(i)), INDD(R3, IMM(j)) */;
MOV(R4, IMM(1));
MOV(R5, IMM(0));
LabelEnvLoop26:
CMP(R5,IMM(0));
JUMP_GE(LabelEnvLoopExit26);
MOV(INDD(R2, R4), INDD(R3, R5));
INCR(R4);
INCR(R5);
JUMP(LabelEnvLoop26);
LabelEnvLoopExit26: 
/* Clone the parameters (If needed) - Malloc(params.length): ... */
PUSH(IMM(0));
CALL(MALLOC);
DROP(IMM(1));

MOV(R3, R0); // R3 -> params.addr.. 
/* Loop through parameters and clone them (R5 = 2, R6 is the loop counter): */
MOV(INDD(R2,0), R3);
MOV(R5, IMM(2));
MOV(R6, IMM(0));
Labelparamsoop26:
CMP(R5,IMM(2));
JUMP_GE(LabelparamsoopExit26);
MOV(INDD(R3, R6), FPARG(R5));
//R2[0] -> new parameters
INCR(R5);
INCR(R6);
JUMP(Labelparamsoop26);
LabelparamsoopExit26: 
MOV(INDD(R10, 1), R2); // Parameters copied. the new env is at 1.
MOV(INDD(R10, IMM(2)), LABEL(LabelClosureBody26)); // Append the body
MOV(R0, R10);
JUMP(LabelClosureEnd26);
LabelClosureBody26:
PUSH(FP);
MOV(FP, SP);
/* -- createLambdaSimpleBody -- */
MOV(R1, FPARG(1));
CMP(R1, IMM(1));
JUMP_NE(ERROR);
/* CodeGen:*/


/* ---------------------------------------------- */
/*                  Tail Applic Code: */
/* ---------------------------------------------- */


/* ---------------------------------------------- */
/*                  Applic Code: */
/* ---------------------------------------------- */
/* Compiled params, in reverse order: */


/* ---------------------------------------------- */
/*                  Applic Code: */
/* ---------------------------------------------- */
/* Compiled params, in reverse order: */
/* --- P-Var: --- */
MOV(R0, FPARG(2));

PUSH(R0);
PUSH(IMM(1)) // Push Num of args;

/* The Compiled Function: */
/* --- F-Var: --- */
MOV(R1, IMM(611)); // Value of Free var bucket.Address
MOV(R2,INDD(R1,0));
MOV(R0,R2);
CMP(INDD(R0,0), IMM(T_CLOSURE));
JUMP_NE(ERROR);
PUSH(INDD(R0, IMM(1)));
CALLA(INDD(R0, IMM(2)));
MOV(R5,STARG(IMM(0))) // R5 = Number of args to drop;
ADD(R5, IMM(2)) // R5 = R5 + env + numOfArgs;
DROP(R5);

PUSH(R0);
PUSH(IMM(1)) // Push Num of args;

/* The Compiled Function: */
/* --- F-Var: --- */
MOV(R1, IMM(616)); // Value of Free var bucket.Address
MOV(R2,INDD(R1,0));
MOV(R0,R2);
CMP(INDD(R0,0), IMM(T_CLOSURE));
JUMP_NE(ERROR);
PUSH(INDD(R0, IMM(1)));
CALLA(INDD(R0, IMM(2)));
MOV(R5,STARG(IMM(0))) // R5 = Number of args to drop;
ADD(R5, IMM(2)) // R5 = R5 + env + numOfArgs;
DROP(R5);

PUSH(R0);
 // Compile params and push (in reverse).
/* push number of args. */
PUSH(IMM(1));
/* Compile function and add it's code: */
/* --- F-Var: --- */
MOV(R1, IMM(616)); // Value of Free var bucket.Address
MOV(R2,INDD(R1,0));
MOV(R0,R2);
CMP(INDD(R0,0), IMM(T_CLOSURE)); // Check for errors
JUMP_NE(ERROR);
PUSH(INDD(R0,1)); // Push Environment
PUSH(FPARG(-1)); // Push Ret addr (from current frame)
MOV(R4, IMM(0)); // R4 will be the index
MOV(R6, IMM(2)); // R6 = Old STARG.offset
MOV(R8,FPARG(-2)); // R8 = old FP
MOV(R12,FPARG(1)); // R12 = Old argsCount
MOV(R13,STARG(1)); // R13 = New argsCount
MOV(R5, R12); // R5 = Old FPARG.offset
ADD(R5, IMM(1));
LabelTailLoop23:
CMP(R4, IMM(4));
JUMP_EQ(LabelTailExit23);
MOV(FPARG(R5), STARG(R6));
ADD(R4, IMM(1));
SUB(R5, IMM(1));
SUB(R6, IMM(1));
JUMP(LabelTailLoop23);
LabelTailExit23:
MOV(R9, R13);
SUB(R9, IMM(1));
SUB(R9, R12);
MOV(SP, FP);
ADD(SP, R9);
MOV(FP, R8);
JUMPA(INDD(R0, 2));
/* CodeGen-End*/

POP(FP);
RETURN;
LabelClosureEnd26:

MOV(ADDR(546), R0);
MOV(R0, SOB_VOID);


CALL(PRINT_R0_VALUE);



/* --- Define: -- */


/* ---------------------------------------------- */
/*               Lambda Code: */
/* ---------------------------------------------- */
/* Malloc 3 for: closure, env and the body. */
PUSH(IMM(3));
CALL(MALLOC);
DROP(IMM(1));

MOV(R10,R0); /* R10 holds Addr of malloc */
MOV(INDD(R10,0), IMM(T_CLOSURE)); /* set T_Closure to location 0 */
/* Malloc(env.size()+1): */
PUSH(IMM(1));
CALL(MALLOC);
DROP(IMM(1));
MOV(R2,R0); /* R2 -> new env addr */
MOV(R3, FPARG(0)); /* R3 = old env adress */
/*Clone the new environment:
for (i = 1, j = 0; j < 0; j++, i++) /* R4 = i, R5 = jMOV(INDD(R2, IMM(i)), INDD(R3, IMM(j)) */;
MOV(R4, IMM(1));
MOV(R5, IMM(0));
LabelEnvLoop25:
CMP(R5,IMM(0));
JUMP_GE(LabelEnvLoopExit25);
MOV(INDD(R2, R4), INDD(R3, R5));
INCR(R4);
INCR(R5);
JUMP(LabelEnvLoop25);
LabelEnvLoopExit25: 
/* Clone the parameters (If needed) - Malloc(params.length): ... */
PUSH(IMM(0));
CALL(MALLOC);
DROP(IMM(1));

MOV(R3, R0); // R3 -> params.addr.. 
/* Loop through parameters and clone them (R5 = 2, R6 is the loop counter): */
MOV(INDD(R2,0), R3);
MOV(R5, IMM(2));
MOV(R6, IMM(0));
Labelparamsoop25:
CMP(R5,IMM(2));
JUMP_GE(LabelparamsoopExit25);
MOV(INDD(R3, R6), FPARG(R5));
//R2[0] -> new parameters
INCR(R5);
INCR(R6);
JUMP(Labelparamsoop25);
LabelparamsoopExit25: 
MOV(INDD(R10, 1), R2); // Parameters copied. the new env is at 1.
MOV(INDD(R10, IMM(2)), LABEL(LabelClosureBody25)); // Append the body
MOV(R0, R10);
JUMP(LabelClosureEnd25);
LabelClosureBody25:
PUSH(FP);
MOV(FP, SP);
/* -- createLambdaSimpleBody -- */
MOV(R1, FPARG(1));
CMP(R1, IMM(1));
JUMP_NE(ERROR);
/* CodeGen:*/


/* ---------------------------------------------- */
/*                  Tail Applic Code: */
/* ---------------------------------------------- */


/* ---------------------------------------------- */
/*                  Applic Code: */
/* ---------------------------------------------- */
/* Compiled params, in reverse order: */


/* ---------------------------------------------- */
/*                  Applic Code: */
/* ---------------------------------------------- */
/* Compiled params, in reverse order: */
/* --- P-Var: --- */
MOV(R0, FPARG(2));

PUSH(R0);
PUSH(IMM(1)) // Push Num of args;

/* The Compiled Function: */
/* --- F-Var: --- */
MOV(R1, IMM(611)); // Value of Free var bucket.Address
MOV(R2,INDD(R1,0));
MOV(R0,R2);
CMP(INDD(R0,0), IMM(T_CLOSURE));
JUMP_NE(ERROR);
PUSH(INDD(R0, IMM(1)));
CALLA(INDD(R0, IMM(2)));
MOV(R5,STARG(IMM(0))) // R5 = Number of args to drop;
ADD(R5, IMM(2)) // R5 = R5 + env + numOfArgs;
DROP(R5);

PUSH(R0);
PUSH(IMM(1)) // Push Num of args;

/* The Compiled Function: */
/* --- F-Var: --- */
MOV(R1, IMM(611)); // Value of Free var bucket.Address
MOV(R2,INDD(R1,0));
MOV(R0,R2);
CMP(INDD(R0,0), IMM(T_CLOSURE));
JUMP_NE(ERROR);
PUSH(INDD(R0, IMM(1)));
CALLA(INDD(R0, IMM(2)));
MOV(R5,STARG(IMM(0))) // R5 = Number of args to drop;
ADD(R5, IMM(2)) // R5 = R5 + env + numOfArgs;
DROP(R5);

PUSH(R0);
 // Compile params and push (in reverse).
/* push number of args. */
PUSH(IMM(1));
/* Compile function and add it's code: */
/* --- F-Var: --- */
MOV(R1, IMM(616)); // Value of Free var bucket.Address
MOV(R2,INDD(R1,0));
MOV(R0,R2);
CMP(INDD(R0,0), IMM(T_CLOSURE)); // Check for errors
JUMP_NE(ERROR);
PUSH(INDD(R0,1)); // Push Environment
PUSH(FPARG(-1)); // Push Ret addr (from current frame)
MOV(R4, IMM(0)); // R4 will be the index
MOV(R6, IMM(2)); // R6 = Old STARG.offset
MOV(R8,FPARG(-2)); // R8 = old FP
MOV(R12,FPARG(1)); // R12 = Old argsCount
MOV(R13,STARG(1)); // R13 = New argsCount
MOV(R5, R12); // R5 = Old FPARG.offset
ADD(R5, IMM(1));
LabelTailLoop22:
CMP(R4, IMM(4));
JUMP_EQ(LabelTailExit22);
MOV(FPARG(R5), STARG(R6));
ADD(R4, IMM(1));
SUB(R5, IMM(1));
SUB(R6, IMM(1));
JUMP(LabelTailLoop22);
LabelTailExit22:
MOV(R9, R13);
SUB(R9, IMM(1));
SUB(R9, R12);
MOV(SP, FP);
ADD(SP, R9);
MOV(FP, R8);
JUMPA(INDD(R0, 2));
/* CodeGen-End*/

POP(FP);
RETURN;
LabelClosureEnd25:

MOV(ADDR(541), R0);
MOV(R0, SOB_VOID);


CALL(PRINT_R0_VALUE);



/* --- Define: -- */


/* ---------------------------------------------- */
/*               Lambda Code: */
/* ---------------------------------------------- */
/* Malloc 3 for: closure, env and the body. */
PUSH(IMM(3));
CALL(MALLOC);
DROP(IMM(1));

MOV(R10,R0); /* R10 holds Addr of malloc */
MOV(INDD(R10,0), IMM(T_CLOSURE)); /* set T_Closure to location 0 */
/* Malloc(env.size()+1): */
PUSH(IMM(1));
CALL(MALLOC);
DROP(IMM(1));
MOV(R2,R0); /* R2 -> new env addr */
MOV(R3, FPARG(0)); /* R3 = old env adress */
/*Clone the new environment:
for (i = 1, j = 0; j < 0; j++, i++) /* R4 = i, R5 = jMOV(INDD(R2, IMM(i)), INDD(R3, IMM(j)) */;
MOV(R4, IMM(1));
MOV(R5, IMM(0));
LabelEnvLoop24:
CMP(R5,IMM(0));
JUMP_GE(LabelEnvLoopExit24);
MOV(INDD(R2, R4), INDD(R3, R5));
INCR(R4);
INCR(R5);
JUMP(LabelEnvLoop24);
LabelEnvLoopExit24: 
/* Clone the parameters (If needed) - Malloc(params.length): ... */
PUSH(IMM(0));
CALL(MALLOC);
DROP(IMM(1));

MOV(R3, R0); // R3 -> params.addr.. 
/* Loop through parameters and clone them (R5 = 2, R6 is the loop counter): */
MOV(INDD(R2,0), R3);
MOV(R5, IMM(2));
MOV(R6, IMM(0));
Labelparamsoop24:
CMP(R5,IMM(2));
JUMP_GE(LabelparamsoopExit24);
MOV(INDD(R3, R6), FPARG(R5));
//R2[0] -> new parameters
INCR(R5);
INCR(R6);
JUMP(Labelparamsoop24);
LabelparamsoopExit24: 
MOV(INDD(R10, 1), R2); // Parameters copied. the new env is at 1.
MOV(INDD(R10, IMM(2)), LABEL(LabelClosureBody24)); // Append the body
MOV(R0, R10);
JUMP(LabelClosureEnd24);
LabelClosureBody24:
PUSH(FP);
MOV(FP, SP);
/* -- createLambdaSimpleBody -- */
MOV(R1, FPARG(1));
CMP(R1, IMM(1));
JUMP_NE(ERROR);
/* CodeGen:*/


/* ---------------------------------------------- */
/*                  Tail Applic Code: */
/* ---------------------------------------------- */


/* ---------------------------------------------- */
/*                  Applic Code: */
/* ---------------------------------------------- */
/* Compiled params, in reverse order: */


/* ---------------------------------------------- */
/*                  Applic Code: */
/* ---------------------------------------------- */
/* Compiled params, in reverse order: */
/* --- P-Var: --- */
MOV(R0, FPARG(2));

PUSH(R0);
PUSH(IMM(1)) // Push Num of args;

/* The Compiled Function: */
/* --- F-Var: --- */
MOV(R1, IMM(611)); // Value of Free var bucket.Address
MOV(R2,INDD(R1,0));
MOV(R0,R2);
CMP(INDD(R0,0), IMM(T_CLOSURE));
JUMP_NE(ERROR);
PUSH(INDD(R0, IMM(1)));
CALLA(INDD(R0, IMM(2)));
MOV(R5,STARG(IMM(0))) // R5 = Number of args to drop;
ADD(R5, IMM(2)) // R5 = R5 + env + numOfArgs;
DROP(R5);

PUSH(R0);
PUSH(IMM(1)) // Push Num of args;

/* The Compiled Function: */
/* --- F-Var: --- */
MOV(R1, IMM(611)); // Value of Free var bucket.Address
MOV(R2,INDD(R1,0));
MOV(R0,R2);
CMP(INDD(R0,0), IMM(T_CLOSURE));
JUMP_NE(ERROR);
PUSH(INDD(R0, IMM(1)));
CALLA(INDD(R0, IMM(2)));
MOV(R5,STARG(IMM(0))) // R5 = Number of args to drop;
ADD(R5, IMM(2)) // R5 = R5 + env + numOfArgs;
DROP(R5);

PUSH(R0);
 // Compile params and push (in reverse).
/* push number of args. */
PUSH(IMM(1));
/* Compile function and add it's code: */
/* --- F-Var: --- */
MOV(R1, IMM(611)); // Value of Free var bucket.Address
MOV(R2,INDD(R1,0));
MOV(R0,R2);
CMP(INDD(R0,0), IMM(T_CLOSURE)); // Check for errors
JUMP_NE(ERROR);
PUSH(INDD(R0,1)); // Push Environment
PUSH(FPARG(-1)); // Push Ret addr (from current frame)
MOV(R4, IMM(0)); // R4 will be the index
MOV(R6, IMM(2)); // R6 = Old STARG.offset
MOV(R8,FPARG(-2)); // R8 = old FP
MOV(R12,FPARG(1)); // R12 = Old argsCount
MOV(R13,STARG(1)); // R13 = New argsCount
MOV(R5, R12); // R5 = Old FPARG.offset
ADD(R5, IMM(1));
LabelTailLoop21:
CMP(R4, IMM(4));
JUMP_EQ(LabelTailExit21);
MOV(FPARG(R5), STARG(R6));
ADD(R4, IMM(1));
SUB(R5, IMM(1));
SUB(R6, IMM(1));
JUMP(LabelTailLoop21);
LabelTailExit21:
MOV(R9, R13);
SUB(R9, IMM(1));
SUB(R9, R12);
MOV(SP, FP);
ADD(SP, R9);
MOV(FP, R8);
JUMPA(INDD(R0, 2));
/* CodeGen-End*/

POP(FP);
RETURN;
LabelClosureEnd24:

MOV(ADDR(536), R0);
MOV(R0, SOB_VOID);


CALL(PRINT_R0_VALUE);



/* --- Define: -- */


/* ---------------------------------------------- */
/*               Lambda Code: */
/* ---------------------------------------------- */
/* Malloc 3 for: closure, env and the body. */
PUSH(IMM(3));
CALL(MALLOC);
DROP(IMM(1));

MOV(R10,R0); /* R10 holds Addr of malloc */
MOV(INDD(R10,0), IMM(T_CLOSURE)); /* set T_Closure to location 0 */
/* Malloc(env.size()+1): */
PUSH(IMM(1));
CALL(MALLOC);
DROP(IMM(1));
MOV(R2,R0); /* R2 -> new env addr */
MOV(R3, FPARG(0)); /* R3 = old env adress */
/*Clone the new environment:
for (i = 1, j = 0; j < 0; j++, i++) /* R4 = i, R5 = jMOV(INDD(R2, IMM(i)), INDD(R3, IMM(j)) */;
MOV(R4, IMM(1));
MOV(R5, IMM(0));
LabelEnvLoop23:
CMP(R5,IMM(0));
JUMP_GE(LabelEnvLoopExit23);
MOV(INDD(R2, R4), INDD(R3, R5));
INCR(R4);
INCR(R5);
JUMP(LabelEnvLoop23);
LabelEnvLoopExit23: 
/* Clone the parameters (If needed) - Malloc(params.length): ... */
PUSH(IMM(0));
CALL(MALLOC);
DROP(IMM(1));

MOV(R3, R0); // R3 -> params.addr.. 
/* Loop through parameters and clone them (R5 = 2, R6 is the loop counter): */
MOV(INDD(R2,0), R3);
MOV(R5, IMM(2));
MOV(R6, IMM(0));
Labelparamsoop23:
CMP(R5,IMM(2));
JUMP_GE(LabelparamsoopExit23);
MOV(INDD(R3, R6), FPARG(R5));
//R2[0] -> new parameters
INCR(R5);
INCR(R6);
JUMP(Labelparamsoop23);
LabelparamsoopExit23: 
MOV(INDD(R10, 1), R2); // Parameters copied. the new env is at 1.
MOV(INDD(R10, IMM(2)), LABEL(LabelClosureBody23)); // Append the body
MOV(R0, R10);
JUMP(LabelClosureEnd23);
LabelClosureBody23:
PUSH(FP);
MOV(FP, SP);
/* -- createLambdaSimpleBody -- */
MOV(R1, FPARG(1));
CMP(R1, IMM(1));
JUMP_NE(ERROR);
/* CodeGen:*/


/* ---------------------------------------------- */
/*                  Tail Applic Code: */
/* ---------------------------------------------- */


/* ---------------------------------------------- */
/*                  Applic Code: */
/* ---------------------------------------------- */
/* Compiled params, in reverse order: */


/* ---------------------------------------------- */
/*                  Applic Code: */
/* ---------------------------------------------- */
/* Compiled params, in reverse order: */
/* --- P-Var: --- */
MOV(R0, FPARG(2));

PUSH(R0);
PUSH(IMM(1)) // Push Num of args;

/* The Compiled Function: */
/* --- F-Var: --- */
MOV(R1, IMM(616)); // Value of Free var bucket.Address
MOV(R2,INDD(R1,0));
MOV(R0,R2);
CMP(INDD(R0,0), IMM(T_CLOSURE));
JUMP_NE(ERROR);
PUSH(INDD(R0, IMM(1)));
CALLA(INDD(R0, IMM(2)));
MOV(R5,STARG(IMM(0))) // R5 = Number of args to drop;
ADD(R5, IMM(2)) // R5 = R5 + env + numOfArgs;
DROP(R5);

PUSH(R0);
PUSH(IMM(1)) // Push Num of args;

/* The Compiled Function: */
/* --- F-Var: --- */
MOV(R1, IMM(616)); // Value of Free var bucket.Address
MOV(R2,INDD(R1,0));
MOV(R0,R2);
CMP(INDD(R0,0), IMM(T_CLOSURE));
JUMP_NE(ERROR);
PUSH(INDD(R0, IMM(1)));
CALLA(INDD(R0, IMM(2)));
MOV(R5,STARG(IMM(0))) // R5 = Number of args to drop;
ADD(R5, IMM(2)) // R5 = R5 + env + numOfArgs;
DROP(R5);

PUSH(R0);
 // Compile params and push (in reverse).
/* push number of args. */
PUSH(IMM(1));
/* Compile function and add it's code: */
/* --- F-Var: --- */
MOV(R1, IMM(616)); // Value of Free var bucket.Address
MOV(R2,INDD(R1,0));
MOV(R0,R2);
CMP(INDD(R0,0), IMM(T_CLOSURE)); // Check for errors
JUMP_NE(ERROR);
PUSH(INDD(R0,1)); // Push Environment
PUSH(FPARG(-1)); // Push Ret addr (from current frame)
MOV(R4, IMM(0)); // R4 will be the index
MOV(R6, IMM(2)); // R6 = Old STARG.offset
MOV(R8,FPARG(-2)); // R8 = old FP
MOV(R12,FPARG(1)); // R12 = Old argsCount
MOV(R13,STARG(1)); // R13 = New argsCount
MOV(R5, R12); // R5 = Old FPARG.offset
ADD(R5, IMM(1));
LabelTailLoop20:
CMP(R4, IMM(4));
JUMP_EQ(LabelTailExit20);
MOV(FPARG(R5), STARG(R6));
ADD(R4, IMM(1));
SUB(R5, IMM(1));
SUB(R6, IMM(1));
JUMP(LabelTailLoop20);
LabelTailExit20:
MOV(R9, R13);
SUB(R9, IMM(1));
SUB(R9, R12);
MOV(SP, FP);
ADD(SP, R9);
MOV(FP, R8);
JUMPA(INDD(R0, 2));
/* CodeGen-End*/

POP(FP);
RETURN;
LabelClosureEnd23:

MOV(ADDR(531), R0);
MOV(R0, SOB_VOID);


CALL(PRINT_R0_VALUE);



/* --- Define: -- */


/* ---------------------------------------------- */
/*               Lambda Code: */
/* ---------------------------------------------- */
/* Malloc 3 for: closure, env and the body. */
PUSH(IMM(3));
CALL(MALLOC);
DROP(IMM(1));

MOV(R10,R0); /* R10 holds Addr of malloc */
MOV(INDD(R10,0), IMM(T_CLOSURE)); /* set T_Closure to location 0 */
/* Malloc(env.size()+1): */
PUSH(IMM(1));
CALL(MALLOC);
DROP(IMM(1));
MOV(R2,R0); /* R2 -> new env addr */
MOV(R3, FPARG(0)); /* R3 = old env adress */
/*Clone the new environment:
for (i = 1, j = 0; j < 0; j++, i++) /* R4 = i, R5 = jMOV(INDD(R2, IMM(i)), INDD(R3, IMM(j)) */;
MOV(R4, IMM(1));
MOV(R5, IMM(0));
LabelEnvLoop22:
CMP(R5,IMM(0));
JUMP_GE(LabelEnvLoopExit22);
MOV(INDD(R2, R4), INDD(R3, R5));
INCR(R4);
INCR(R5);
JUMP(LabelEnvLoop22);
LabelEnvLoopExit22: 
/* Clone the parameters (If needed) - Malloc(params.length): ... */
PUSH(IMM(0));
CALL(MALLOC);
DROP(IMM(1));

MOV(R3, R0); // R3 -> params.addr.. 
/* Loop through parameters and clone them (R5 = 2, R6 is the loop counter): */
MOV(INDD(R2,0), R3);
MOV(R5, IMM(2));
MOV(R6, IMM(0));
Labelparamsoop22:
CMP(R5,IMM(2));
JUMP_GE(LabelparamsoopExit22);
MOV(INDD(R3, R6), FPARG(R5));
//R2[0] -> new parameters
INCR(R5);
INCR(R6);
JUMP(Labelparamsoop22);
LabelparamsoopExit22: 
MOV(INDD(R10, 1), R2); // Parameters copied. the new env is at 1.
MOV(INDD(R10, IMM(2)), LABEL(LabelClosureBody22)); // Append the body
MOV(R0, R10);
JUMP(LabelClosureEnd22);
LabelClosureBody22:
PUSH(FP);
MOV(FP, SP);
/* -- createLambdaSimpleBody -- */
MOV(R1, FPARG(1));
CMP(R1, IMM(1));
JUMP_NE(ERROR);
/* CodeGen:*/


/* ---------------------------------------------- */
/*                  Tail Applic Code: */
/* ---------------------------------------------- */


/* ---------------------------------------------- */
/*                  Applic Code: */
/* ---------------------------------------------- */
/* Compiled params, in reverse order: */


/* ---------------------------------------------- */
/*                  Applic Code: */
/* ---------------------------------------------- */
/* Compiled params, in reverse order: */


/* ---------------------------------------------- */
/*                  Applic Code: */
/* ---------------------------------------------- */
/* Compiled params, in reverse order: */
/* --- P-Var: --- */
MOV(R0, FPARG(2));

PUSH(R0);
PUSH(IMM(1)) // Push Num of args;

/* The Compiled Function: */
/* --- F-Var: --- */
MOV(R1, IMM(611)); // Value of Free var bucket.Address
MOV(R2,INDD(R1,0));
MOV(R0,R2);
CMP(INDD(R0,0), IMM(T_CLOSURE));
JUMP_NE(ERROR);
PUSH(INDD(R0, IMM(1)));
CALLA(INDD(R0, IMM(2)));
MOV(R5,STARG(IMM(0))) // R5 = Number of args to drop;
ADD(R5, IMM(2)) // R5 = R5 + env + numOfArgs;
DROP(R5);

PUSH(R0);
PUSH(IMM(1)) // Push Num of args;

/* The Compiled Function: */
/* --- F-Var: --- */
MOV(R1, IMM(616)); // Value of Free var bucket.Address
MOV(R2,INDD(R1,0));
MOV(R0,R2);
CMP(INDD(R0,0), IMM(T_CLOSURE));
JUMP_NE(ERROR);
PUSH(INDD(R0, IMM(1)));
CALLA(INDD(R0, IMM(2)));
MOV(R5,STARG(IMM(0))) // R5 = Number of args to drop;
ADD(R5, IMM(2)) // R5 = R5 + env + numOfArgs;
DROP(R5);

PUSH(R0);
PUSH(IMM(1)) // Push Num of args;

/* The Compiled Function: */
/* --- F-Var: --- */
MOV(R1, IMM(616)); // Value of Free var bucket.Address
MOV(R2,INDD(R1,0));
MOV(R0,R2);
CMP(INDD(R0,0), IMM(T_CLOSURE));
JUMP_NE(ERROR);
PUSH(INDD(R0, IMM(1)));
CALLA(INDD(R0, IMM(2)));
MOV(R5,STARG(IMM(0))) // R5 = Number of args to drop;
ADD(R5, IMM(2)) // R5 = R5 + env + numOfArgs;
DROP(R5);

PUSH(R0);
 // Compile params and push (in reverse).
/* push number of args. */
PUSH(IMM(1));
/* Compile function and add it's code: */
/* --- F-Var: --- */
MOV(R1, IMM(616)); // Value of Free var bucket.Address
MOV(R2,INDD(R1,0));
MOV(R0,R2);
CMP(INDD(R0,0), IMM(T_CLOSURE)); // Check for errors
JUMP_NE(ERROR);
PUSH(INDD(R0,1)); // Push Environment
PUSH(FPARG(-1)); // Push Ret addr (from current frame)
MOV(R4, IMM(0)); // R4 will be the index
MOV(R6, IMM(2)); // R6 = Old STARG.offset
MOV(R8,FPARG(-2)); // R8 = old FP
MOV(R12,FPARG(1)); // R12 = Old argsCount
MOV(R13,STARG(1)); // R13 = New argsCount
MOV(R5, R12); // R5 = Old FPARG.offset
ADD(R5, IMM(1));
LabelTailLoop19:
CMP(R4, IMM(4));
JUMP_EQ(LabelTailExit19);
MOV(FPARG(R5), STARG(R6));
ADD(R4, IMM(1));
SUB(R5, IMM(1));
SUB(R6, IMM(1));
JUMP(LabelTailLoop19);
LabelTailExit19:
MOV(R9, R13);
SUB(R9, IMM(1));
SUB(R9, R12);
MOV(SP, FP);
ADD(SP, R9);
MOV(FP, R8);
JUMPA(INDD(R0, 2));
/* CodeGen-End*/

POP(FP);
RETURN;
LabelClosureEnd22:

MOV(ADDR(526), R0);
MOV(R0, SOB_VOID);


CALL(PRINT_R0_VALUE);



/* --- Define: -- */


/* ---------------------------------------------- */
/*               Lambda Code: */
/* ---------------------------------------------- */
/* Malloc 3 for: closure, env and the body. */
PUSH(IMM(3));
CALL(MALLOC);
DROP(IMM(1));

MOV(R10,R0); /* R10 holds Addr of malloc */
MOV(INDD(R10,0), IMM(T_CLOSURE)); /* set T_Closure to location 0 */
/* Malloc(env.size()+1): */
PUSH(IMM(1));
CALL(MALLOC);
DROP(IMM(1));
MOV(R2,R0); /* R2 -> new env addr */
MOV(R3, FPARG(0)); /* R3 = old env adress */
/*Clone the new environment:
for (i = 1, j = 0; j < 0; j++, i++) /* R4 = i, R5 = jMOV(INDD(R2, IMM(i)), INDD(R3, IMM(j)) */;
MOV(R4, IMM(1));
MOV(R5, IMM(0));
LabelEnvLoop21:
CMP(R5,IMM(0));
JUMP_GE(LabelEnvLoopExit21);
MOV(INDD(R2, R4), INDD(R3, R5));
INCR(R4);
INCR(R5);
JUMP(LabelEnvLoop21);
LabelEnvLoopExit21: 
/* Clone the parameters (If needed) - Malloc(params.length): ... */
PUSH(IMM(0));
CALL(MALLOC);
DROP(IMM(1));

MOV(R3, R0); // R3 -> params.addr.. 
/* Loop through parameters and clone them (R5 = 2, R6 is the loop counter): */
MOV(INDD(R2,0), R3);
MOV(R5, IMM(2));
MOV(R6, IMM(0));
Labelparamsoop21:
CMP(R5,IMM(2));
JUMP_GE(LabelparamsoopExit21);
MOV(INDD(R3, R6), FPARG(R5));
//R2[0] -> new parameters
INCR(R5);
INCR(R6);
JUMP(Labelparamsoop21);
LabelparamsoopExit21: 
MOV(INDD(R10, 1), R2); // Parameters copied. the new env is at 1.
MOV(INDD(R10, IMM(2)), LABEL(LabelClosureBody21)); // Append the body
MOV(R0, R10);
JUMP(LabelClosureEnd21);
LabelClosureBody21:
PUSH(FP);
MOV(FP, SP);
/* -- createLambdaSimpleBody -- */
MOV(R1, FPARG(1));
CMP(R1, IMM(1));
JUMP_NE(ERROR);
/* CodeGen:*/


/* ---------------------------------------------- */
/*                  Tail Applic Code: */
/* ---------------------------------------------- */


/* ---------------------------------------------- */
/*                  Applic Code: */
/* ---------------------------------------------- */
/* Compiled params, in reverse order: */


/* ---------------------------------------------- */
/*                  Applic Code: */
/* ---------------------------------------------- */
/* Compiled params, in reverse order: */


/* ---------------------------------------------- */
/*                  Applic Code: */
/* ---------------------------------------------- */
/* Compiled params, in reverse order: */
/* --- P-Var: --- */
MOV(R0, FPARG(2));

PUSH(R0);
PUSH(IMM(1)) // Push Num of args;

/* The Compiled Function: */
/* --- F-Var: --- */
MOV(R1, IMM(611)); // Value of Free var bucket.Address
MOV(R2,INDD(R1,0));
MOV(R0,R2);
CMP(INDD(R0,0), IMM(T_CLOSURE));
JUMP_NE(ERROR);
PUSH(INDD(R0, IMM(1)));
CALLA(INDD(R0, IMM(2)));
MOV(R5,STARG(IMM(0))) // R5 = Number of args to drop;
ADD(R5, IMM(2)) // R5 = R5 + env + numOfArgs;
DROP(R5);

PUSH(R0);
PUSH(IMM(1)) // Push Num of args;

/* The Compiled Function: */
/* --- F-Var: --- */
MOV(R1, IMM(611)); // Value of Free var bucket.Address
MOV(R2,INDD(R1,0));
MOV(R0,R2);
CMP(INDD(R0,0), IMM(T_CLOSURE));
JUMP_NE(ERROR);
PUSH(INDD(R0, IMM(1)));
CALLA(INDD(R0, IMM(2)));
MOV(R5,STARG(IMM(0))) // R5 = Number of args to drop;
ADD(R5, IMM(2)) // R5 = R5 + env + numOfArgs;
DROP(R5);

PUSH(R0);
PUSH(IMM(1)) // Push Num of args;

/* The Compiled Function: */
/* --- F-Var: --- */
MOV(R1, IMM(616)); // Value of Free var bucket.Address
MOV(R2,INDD(R1,0));
MOV(R0,R2);
CMP(INDD(R0,0), IMM(T_CLOSURE));
JUMP_NE(ERROR);
PUSH(INDD(R0, IMM(1)));
CALLA(INDD(R0, IMM(2)));
MOV(R5,STARG(IMM(0))) // R5 = Number of args to drop;
ADD(R5, IMM(2)) // R5 = R5 + env + numOfArgs;
DROP(R5);

PUSH(R0);
 // Compile params and push (in reverse).
/* push number of args. */
PUSH(IMM(1));
/* Compile function and add it's code: */
/* --- F-Var: --- */
MOV(R1, IMM(616)); // Value of Free var bucket.Address
MOV(R2,INDD(R1,0));
MOV(R0,R2);
CMP(INDD(R0,0), IMM(T_CLOSURE)); // Check for errors
JUMP_NE(ERROR);
PUSH(INDD(R0,1)); // Push Environment
PUSH(FPARG(-1)); // Push Ret addr (from current frame)
MOV(R4, IMM(0)); // R4 will be the index
MOV(R6, IMM(2)); // R6 = Old STARG.offset
MOV(R8,FPARG(-2)); // R8 = old FP
MOV(R12,FPARG(1)); // R12 = Old argsCount
MOV(R13,STARG(1)); // R13 = New argsCount
MOV(R5, R12); // R5 = Old FPARG.offset
ADD(R5, IMM(1));
LabelTailLoop18:
CMP(R4, IMM(4));
JUMP_EQ(LabelTailExit18);
MOV(FPARG(R5), STARG(R6));
ADD(R4, IMM(1));
SUB(R5, IMM(1));
SUB(R6, IMM(1));
JUMP(LabelTailLoop18);
LabelTailExit18:
MOV(R9, R13);
SUB(R9, IMM(1));
SUB(R9, R12);
MOV(SP, FP);
ADD(SP, R9);
MOV(FP, R8);
JUMPA(INDD(R0, 2));
/* CodeGen-End*/

POP(FP);
RETURN;
LabelClosureEnd21:

MOV(ADDR(521), R0);
MOV(R0, SOB_VOID);


CALL(PRINT_R0_VALUE);



/* --- Define: -- */


/* ---------------------------------------------- */
/*               Lambda Code: */
/* ---------------------------------------------- */
/* Malloc 3 for: closure, env and the body. */
PUSH(IMM(3));
CALL(MALLOC);
DROP(IMM(1));

MOV(R10,R0); /* R10 holds Addr of malloc */
MOV(INDD(R10,0), IMM(T_CLOSURE)); /* set T_Closure to location 0 */
/* Malloc(env.size()+1): */
PUSH(IMM(1));
CALL(MALLOC);
DROP(IMM(1));
MOV(R2,R0); /* R2 -> new env addr */
MOV(R3, FPARG(0)); /* R3 = old env adress */
/*Clone the new environment:
for (i = 1, j = 0; j < 0; j++, i++) /* R4 = i, R5 = jMOV(INDD(R2, IMM(i)), INDD(R3, IMM(j)) */;
MOV(R4, IMM(1));
MOV(R5, IMM(0));
LabelEnvLoop20:
CMP(R5,IMM(0));
JUMP_GE(LabelEnvLoopExit20);
MOV(INDD(R2, R4), INDD(R3, R5));
INCR(R4);
INCR(R5);
JUMP(LabelEnvLoop20);
LabelEnvLoopExit20: 
/* Clone the parameters (If needed) - Malloc(params.length): ... */
PUSH(IMM(0));
CALL(MALLOC);
DROP(IMM(1));

MOV(R3, R0); // R3 -> params.addr.. 
/* Loop through parameters and clone them (R5 = 2, R6 is the loop counter): */
MOV(INDD(R2,0), R3);
MOV(R5, IMM(2));
MOV(R6, IMM(0));
Labelparamsoop20:
CMP(R5,IMM(2));
JUMP_GE(LabelparamsoopExit20);
MOV(INDD(R3, R6), FPARG(R5));
//R2[0] -> new parameters
INCR(R5);
INCR(R6);
JUMP(Labelparamsoop20);
LabelparamsoopExit20: 
MOV(INDD(R10, 1), R2); // Parameters copied. the new env is at 1.
MOV(INDD(R10, IMM(2)), LABEL(LabelClosureBody20)); // Append the body
MOV(R0, R10);
JUMP(LabelClosureEnd20);
LabelClosureBody20:
PUSH(FP);
MOV(FP, SP);
/* -- createLambdaSimpleBody -- */
MOV(R1, FPARG(1));
CMP(R1, IMM(1));
JUMP_NE(ERROR);
/* CodeGen:*/


/* ---------------------------------------------- */
/*                  Tail Applic Code: */
/* ---------------------------------------------- */


/* ---------------------------------------------- */
/*                  Applic Code: */
/* ---------------------------------------------- */
/* Compiled params, in reverse order: */


/* ---------------------------------------------- */
/*                  Applic Code: */
/* ---------------------------------------------- */
/* Compiled params, in reverse order: */


/* ---------------------------------------------- */
/*                  Applic Code: */
/* ---------------------------------------------- */
/* Compiled params, in reverse order: */
/* --- P-Var: --- */
MOV(R0, FPARG(2));

PUSH(R0);
PUSH(IMM(1)) // Push Num of args;

/* The Compiled Function: */
/* --- F-Var: --- */
MOV(R1, IMM(611)); // Value of Free var bucket.Address
MOV(R2,INDD(R1,0));
MOV(R0,R2);
CMP(INDD(R0,0), IMM(T_CLOSURE));
JUMP_NE(ERROR);
PUSH(INDD(R0, IMM(1)));
CALLA(INDD(R0, IMM(2)));
MOV(R5,STARG(IMM(0))) // R5 = Number of args to drop;
ADD(R5, IMM(2)) // R5 = R5 + env + numOfArgs;
DROP(R5);

PUSH(R0);
PUSH(IMM(1)) // Push Num of args;

/* The Compiled Function: */
/* --- F-Var: --- */
MOV(R1, IMM(611)); // Value of Free var bucket.Address
MOV(R2,INDD(R1,0));
MOV(R0,R2);
CMP(INDD(R0,0), IMM(T_CLOSURE));
JUMP_NE(ERROR);
PUSH(INDD(R0, IMM(1)));
CALLA(INDD(R0, IMM(2)));
MOV(R5,STARG(IMM(0))) // R5 = Number of args to drop;
ADD(R5, IMM(2)) // R5 = R5 + env + numOfArgs;
DROP(R5);

PUSH(R0);
PUSH(IMM(1)) // Push Num of args;

/* The Compiled Function: */
/* --- F-Var: --- */
MOV(R1, IMM(611)); // Value of Free var bucket.Address
MOV(R2,INDD(R1,0));
MOV(R0,R2);
CMP(INDD(R0,0), IMM(T_CLOSURE));
JUMP_NE(ERROR);
PUSH(INDD(R0, IMM(1)));
CALLA(INDD(R0, IMM(2)));
MOV(R5,STARG(IMM(0))) // R5 = Number of args to drop;
ADD(R5, IMM(2)) // R5 = R5 + env + numOfArgs;
DROP(R5);

PUSH(R0);
 // Compile params and push (in reverse).
/* push number of args. */
PUSH(IMM(1));
/* Compile function and add it's code: */
/* --- F-Var: --- */
MOV(R1, IMM(616)); // Value of Free var bucket.Address
MOV(R2,INDD(R1,0));
MOV(R0,R2);
CMP(INDD(R0,0), IMM(T_CLOSURE)); // Check for errors
JUMP_NE(ERROR);
PUSH(INDD(R0,1)); // Push Environment
PUSH(FPARG(-1)); // Push Ret addr (from current frame)
MOV(R4, IMM(0)); // R4 will be the index
MOV(R6, IMM(2)); // R6 = Old STARG.offset
MOV(R8,FPARG(-2)); // R8 = old FP
MOV(R12,FPARG(1)); // R12 = Old argsCount
MOV(R13,STARG(1)); // R13 = New argsCount
MOV(R5, R12); // R5 = Old FPARG.offset
ADD(R5, IMM(1));
LabelTailLoop17:
CMP(R4, IMM(4));
JUMP_EQ(LabelTailExit17);
MOV(FPARG(R5), STARG(R6));
ADD(R4, IMM(1));
SUB(R5, IMM(1));
SUB(R6, IMM(1));
JUMP(LabelTailLoop17);
LabelTailExit17:
MOV(R9, R13);
SUB(R9, IMM(1));
SUB(R9, R12);
MOV(SP, FP);
ADD(SP, R9);
MOV(FP, R8);
JUMPA(INDD(R0, 2));
/* CodeGen-End*/

POP(FP);
RETURN;
LabelClosureEnd20:

MOV(ADDR(516), R0);
MOV(R0, SOB_VOID);


CALL(PRINT_R0_VALUE);



/* --- Define: -- */


/* ---------------------------------------------- */
/*               Lambda Code: */
/* ---------------------------------------------- */
/* Malloc 3 for: closure, env and the body. */
PUSH(IMM(3));
CALL(MALLOC);
DROP(IMM(1));

MOV(R10,R0); /* R10 holds Addr of malloc */
MOV(INDD(R10,0), IMM(T_CLOSURE)); /* set T_Closure to location 0 */
/* Malloc(env.size()+1): */
PUSH(IMM(1));
CALL(MALLOC);
DROP(IMM(1));
MOV(R2,R0); /* R2 -> new env addr */
MOV(R3, FPARG(0)); /* R3 = old env adress */
/*Clone the new environment:
for (i = 1, j = 0; j < 0; j++, i++) /* R4 = i, R5 = jMOV(INDD(R2, IMM(i)), INDD(R3, IMM(j)) */;
MOV(R4, IMM(1));
MOV(R5, IMM(0));
LabelEnvLoop19:
CMP(R5,IMM(0));
JUMP_GE(LabelEnvLoopExit19);
MOV(INDD(R2, R4), INDD(R3, R5));
INCR(R4);
INCR(R5);
JUMP(LabelEnvLoop19);
LabelEnvLoopExit19: 
/* Clone the parameters (If needed) - Malloc(params.length): ... */
PUSH(IMM(0));
CALL(MALLOC);
DROP(IMM(1));

MOV(R3, R0); // R3 -> params.addr.. 
/* Loop through parameters and clone them (R5 = 2, R6 is the loop counter): */
MOV(INDD(R2,0), R3);
MOV(R5, IMM(2));
MOV(R6, IMM(0));
Labelparamsoop19:
CMP(R5,IMM(2));
JUMP_GE(LabelparamsoopExit19);
MOV(INDD(R3, R6), FPARG(R5));
//R2[0] -> new parameters
INCR(R5);
INCR(R6);
JUMP(Labelparamsoop19);
LabelparamsoopExit19: 
MOV(INDD(R10, 1), R2); // Parameters copied. the new env is at 1.
MOV(INDD(R10, IMM(2)), LABEL(LabelClosureBody19)); // Append the body
MOV(R0, R10);
JUMP(LabelClosureEnd19);
LabelClosureBody19:
PUSH(FP);
MOV(FP, SP);
/* -- createLambdaSimpleBody -- */
MOV(R1, FPARG(1));
CMP(R1, IMM(1));
JUMP_NE(ERROR);
/* CodeGen:*/


/* ---------------------------------------------- */
/*                  Tail Applic Code: */
/* ---------------------------------------------- */


/* ---------------------------------------------- */
/*                  Applic Code: */
/* ---------------------------------------------- */
/* Compiled params, in reverse order: */


/* ---------------------------------------------- */
/*                  Applic Code: */
/* ---------------------------------------------- */
/* Compiled params, in reverse order: */


/* ---------------------------------------------- */
/*                  Applic Code: */
/* ---------------------------------------------- */
/* Compiled params, in reverse order: */
/* --- P-Var: --- */
MOV(R0, FPARG(2));

PUSH(R0);
PUSH(IMM(1)) // Push Num of args;

/* The Compiled Function: */
/* --- F-Var: --- */
MOV(R1, IMM(611)); // Value of Free var bucket.Address
MOV(R2,INDD(R1,0));
MOV(R0,R2);
CMP(INDD(R0,0), IMM(T_CLOSURE));
JUMP_NE(ERROR);
PUSH(INDD(R0, IMM(1)));
CALLA(INDD(R0, IMM(2)));
MOV(R5,STARG(IMM(0))) // R5 = Number of args to drop;
ADD(R5, IMM(2)) // R5 = R5 + env + numOfArgs;
DROP(R5);

PUSH(R0);
PUSH(IMM(1)) // Push Num of args;

/* The Compiled Function: */
/* --- F-Var: --- */
MOV(R1, IMM(611)); // Value of Free var bucket.Address
MOV(R2,INDD(R1,0));
MOV(R0,R2);
CMP(INDD(R0,0), IMM(T_CLOSURE));
JUMP_NE(ERROR);
PUSH(INDD(R0, IMM(1)));
CALLA(INDD(R0, IMM(2)));
MOV(R5,STARG(IMM(0))) // R5 = Number of args to drop;
ADD(R5, IMM(2)) // R5 = R5 + env + numOfArgs;
DROP(R5);

PUSH(R0);
PUSH(IMM(1)) // Push Num of args;

/* The Compiled Function: */
/* --- F-Var: --- */
MOV(R1, IMM(611)); // Value of Free var bucket.Address
MOV(R2,INDD(R1,0));
MOV(R0,R2);
CMP(INDD(R0,0), IMM(T_CLOSURE));
JUMP_NE(ERROR);
PUSH(INDD(R0, IMM(1)));
CALLA(INDD(R0, IMM(2)));
MOV(R5,STARG(IMM(0))) // R5 = Number of args to drop;
ADD(R5, IMM(2)) // R5 = R5 + env + numOfArgs;
DROP(R5);

PUSH(R0);
 // Compile params and push (in reverse).
/* push number of args. */
PUSH(IMM(1));
/* Compile function and add it's code: */
/* --- F-Var: --- */
MOV(R1, IMM(611)); // Value of Free var bucket.Address
MOV(R2,INDD(R1,0));
MOV(R0,R2);
CMP(INDD(R0,0), IMM(T_CLOSURE)); // Check for errors
JUMP_NE(ERROR);
PUSH(INDD(R0,1)); // Push Environment
PUSH(FPARG(-1)); // Push Ret addr (from current frame)
MOV(R4, IMM(0)); // R4 will be the index
MOV(R6, IMM(2)); // R6 = Old STARG.offset
MOV(R8,FPARG(-2)); // R8 = old FP
MOV(R12,FPARG(1)); // R12 = Old argsCount
MOV(R13,STARG(1)); // R13 = New argsCount
MOV(R5, R12); // R5 = Old FPARG.offset
ADD(R5, IMM(1));
LabelTailLoop16:
CMP(R4, IMM(4));
JUMP_EQ(LabelTailExit16);
MOV(FPARG(R5), STARG(R6));
ADD(R4, IMM(1));
SUB(R5, IMM(1));
SUB(R6, IMM(1));
JUMP(LabelTailLoop16);
LabelTailExit16:
MOV(R9, R13);
SUB(R9, IMM(1));
SUB(R9, R12);
MOV(SP, FP);
ADD(SP, R9);
MOV(FP, R8);
JUMPA(INDD(R0, 2));
/* CodeGen-End*/

POP(FP);
RETURN;
LabelClosureEnd19:

MOV(ADDR(511), R0);
MOV(R0, SOB_VOID);


CALL(PRINT_R0_VALUE);



/* --- Define: -- */


/* ---------------------------------------------- */
/*               Lambda Code: */
/* ---------------------------------------------- */
/* Malloc 3 for: closure, env and the body. */
PUSH(IMM(3));
CALL(MALLOC);
DROP(IMM(1));

MOV(R10,R0); /* R10 holds Addr of malloc */
MOV(INDD(R10,0), IMM(T_CLOSURE)); /* set T_Closure to location 0 */
/* Malloc(env.size()+1): */
PUSH(IMM(1));
CALL(MALLOC);
DROP(IMM(1));
MOV(R2,R0); /* R2 -> new env addr */
MOV(R3, FPARG(0)); /* R3 = old env adress */
/*Clone the new environment:
for (i = 1, j = 0; j < 0; j++, i++) /* R4 = i, R5 = jMOV(INDD(R2, IMM(i)), INDD(R3, IMM(j)) */;
MOV(R4, IMM(1));
MOV(R5, IMM(0));
LabelEnvLoop18:
CMP(R5,IMM(0));
JUMP_GE(LabelEnvLoopExit18);
MOV(INDD(R2, R4), INDD(R3, R5));
INCR(R4);
INCR(R5);
JUMP(LabelEnvLoop18);
LabelEnvLoopExit18: 
/* Clone the parameters (If needed) - Malloc(params.length): ... */
PUSH(IMM(0));
CALL(MALLOC);
DROP(IMM(1));

MOV(R3, R0); // R3 -> params.addr.. 
/* Loop through parameters and clone them (R5 = 2, R6 is the loop counter): */
MOV(INDD(R2,0), R3);
MOV(R5, IMM(2));
MOV(R6, IMM(0));
Labelparamsoop18:
CMP(R5,IMM(2));
JUMP_GE(LabelparamsoopExit18);
MOV(INDD(R3, R6), FPARG(R5));
//R2[0] -> new parameters
INCR(R5);
INCR(R6);
JUMP(Labelparamsoop18);
LabelparamsoopExit18: 
MOV(INDD(R10, 1), R2); // Parameters copied. the new env is at 1.
MOV(INDD(R10, IMM(2)), LABEL(LabelClosureBody18)); // Append the body
MOV(R0, R10);
JUMP(LabelClosureEnd18);
LabelClosureBody18:
PUSH(FP);
MOV(FP, SP);
/* -- createLambdaSimpleBody -- */
MOV(R1, FPARG(1));
CMP(R1, IMM(1));
JUMP_NE(ERROR);
/* CodeGen:*/


/* ---------------------------------------------- */
/*                  Tail Applic Code: */
/* ---------------------------------------------- */


/* ---------------------------------------------- */
/*                  Applic Code: */
/* ---------------------------------------------- */
/* Compiled params, in reverse order: */


/* ---------------------------------------------- */
/*                  Applic Code: */
/* ---------------------------------------------- */
/* Compiled params, in reverse order: */


/* ---------------------------------------------- */
/*                  Applic Code: */
/* ---------------------------------------------- */
/* Compiled params, in reverse order: */
/* --- P-Var: --- */
MOV(R0, FPARG(2));

PUSH(R0);
PUSH(IMM(1)) // Push Num of args;

/* The Compiled Function: */
/* --- F-Var: --- */
MOV(R1, IMM(616)); // Value of Free var bucket.Address
MOV(R2,INDD(R1,0));
MOV(R0,R2);
CMP(INDD(R0,0), IMM(T_CLOSURE));
JUMP_NE(ERROR);
PUSH(INDD(R0, IMM(1)));
CALLA(INDD(R0, IMM(2)));
MOV(R5,STARG(IMM(0))) // R5 = Number of args to drop;
ADD(R5, IMM(2)) // R5 = R5 + env + numOfArgs;
DROP(R5);

PUSH(R0);
PUSH(IMM(1)) // Push Num of args;

/* The Compiled Function: */
/* --- F-Var: --- */
MOV(R1, IMM(616)); // Value of Free var bucket.Address
MOV(R2,INDD(R1,0));
MOV(R0,R2);
CMP(INDD(R0,0), IMM(T_CLOSURE));
JUMP_NE(ERROR);
PUSH(INDD(R0, IMM(1)));
CALLA(INDD(R0, IMM(2)));
MOV(R5,STARG(IMM(0))) // R5 = Number of args to drop;
ADD(R5, IMM(2)) // R5 = R5 + env + numOfArgs;
DROP(R5);

PUSH(R0);
PUSH(IMM(1)) // Push Num of args;

/* The Compiled Function: */
/* --- F-Var: --- */
MOV(R1, IMM(616)); // Value of Free var bucket.Address
MOV(R2,INDD(R1,0));
MOV(R0,R2);
CMP(INDD(R0,0), IMM(T_CLOSURE));
JUMP_NE(ERROR);
PUSH(INDD(R0, IMM(1)));
CALLA(INDD(R0, IMM(2)));
MOV(R5,STARG(IMM(0))) // R5 = Number of args to drop;
ADD(R5, IMM(2)) // R5 = R5 + env + numOfArgs;
DROP(R5);

PUSH(R0);
 // Compile params and push (in reverse).
/* push number of args. */
PUSH(IMM(1));
/* Compile function and add it's code: */
/* --- F-Var: --- */
MOV(R1, IMM(616)); // Value of Free var bucket.Address
MOV(R2,INDD(R1,0));
MOV(R0,R2);
CMP(INDD(R0,0), IMM(T_CLOSURE)); // Check for errors
JUMP_NE(ERROR);
PUSH(INDD(R0,1)); // Push Environment
PUSH(FPARG(-1)); // Push Ret addr (from current frame)
MOV(R4, IMM(0)); // R4 will be the index
MOV(R6, IMM(2)); // R6 = Old STARG.offset
MOV(R8,FPARG(-2)); // R8 = old FP
MOV(R12,FPARG(1)); // R12 = Old argsCount
MOV(R13,STARG(1)); // R13 = New argsCount
MOV(R5, R12); // R5 = Old FPARG.offset
ADD(R5, IMM(1));
LabelTailLoop15:
CMP(R4, IMM(4));
JUMP_EQ(LabelTailExit15);
MOV(FPARG(R5), STARG(R6));
ADD(R4, IMM(1));
SUB(R5, IMM(1));
SUB(R6, IMM(1));
JUMP(LabelTailLoop15);
LabelTailExit15:
MOV(R9, R13);
SUB(R9, IMM(1));
SUB(R9, R12);
MOV(SP, FP);
ADD(SP, R9);
MOV(FP, R8);
JUMPA(INDD(R0, 2));
/* CodeGen-End*/

POP(FP);
RETURN;
LabelClosureEnd18:

MOV(ADDR(506), R0);
MOV(R0, SOB_VOID);


CALL(PRINT_R0_VALUE);



/* --- Define: -- */


/* ---------------------------------------------- */
/*               Lambda Code: */
/* ---------------------------------------------- */
/* Malloc 3 for: closure, env and the body. */
PUSH(IMM(3));
CALL(MALLOC);
DROP(IMM(1));

MOV(R10,R0); /* R10 holds Addr of malloc */
MOV(INDD(R10,0), IMM(T_CLOSURE)); /* set T_Closure to location 0 */
/* Malloc(env.size()+1): */
PUSH(IMM(1));
CALL(MALLOC);
DROP(IMM(1));
MOV(R2,R0); /* R2 -> new env addr */
MOV(R3, FPARG(0)); /* R3 = old env adress */
/*Clone the new environment:
for (i = 1, j = 0; j < 0; j++, i++) /* R4 = i, R5 = jMOV(INDD(R2, IMM(i)), INDD(R3, IMM(j)) */;
MOV(R4, IMM(1));
MOV(R5, IMM(0));
LabelEnvLoop14:
CMP(R5,IMM(0));
JUMP_GE(LabelEnvLoopExit14);
MOV(INDD(R2, R4), INDD(R3, R5));
INCR(R4);
INCR(R5);
JUMP(LabelEnvLoop14);
LabelEnvLoopExit14: 
/* Clone the parameters (If needed) - Malloc(params.length): ... */
PUSH(IMM(0));
CALL(MALLOC);
DROP(IMM(1));

MOV(R3, R0); // R3 -> params.addr.. 
/* Loop through parameters and clone them (R5 = 2, R6 is the loop counter): */
MOV(INDD(R2,0), R3);
MOV(R5, IMM(2));
MOV(R6, IMM(0));
Labelparamsoop14:
CMP(R5,IMM(2));
JUMP_GE(LabelparamsoopExit14);
MOV(INDD(R3, R6), FPARG(R5));
//R2[0] -> new parameters
INCR(R5);
INCR(R6);
JUMP(Labelparamsoop14);
LabelparamsoopExit14: 
MOV(INDD(R10, 1), R2); // Parameters copied. the new env is at 1.
MOV(INDD(R10, IMM(2)), LABEL(LabelClosureBody14)); // Append the body
MOV(R0, R10);
JUMP(LabelClosureEnd14);
LabelClosureBody14:
PUSH(FP);
MOV(FP, SP);
/* - Lambda Var Body -*/
POP(R1);  // Old FP
POP(R2);  // Return addr
POP(R3);  // Env
POP(R4);  // args count
PUSH(R4);
PUSH(IMM(0));
CALL(LIST);
DROP(IMM(1));
POP(R4);
DROP(R4);
PUSH(R0);
PUSH(1);
PUSH(R3);
PUSH(R2);
PUSH(R1);
MOV(FP, SP);


/* ---------------------------------------------- */
/*                  Tail Applic Code: */
/* ---------------------------------------------- */
/* In constants .. */
MOV(R0,IMM(3));
PUSH(R0);
/* In constants .. */
MOV(R0,IMM(3));
PUSH(R0);
 // Compile params and push (in reverse).
/* push number of args. */
PUSH(IMM(2));
/* Compile function and add it's code: */


/* ---------------------------------------------- */
/*               Lambda Code: */
/* ---------------------------------------------- */
/* Malloc 3 for: closure, env and the body. */
PUSH(IMM(3));
CALL(MALLOC);
DROP(IMM(1));

MOV(R10,R0); /* R10 holds Addr of malloc */
MOV(INDD(R10,0), IMM(T_CLOSURE)); /* set T_Closure to location 0 */
/* Malloc(env.size()+1): */
PUSH(IMM(2));
CALL(MALLOC);
DROP(IMM(1));
MOV(R2,R0); /* R2 -> new env addr */
MOV(R3, FPARG(0)); /* R3 = old env adress */
/*Clone the new environment:
for (i = 1, j = 0; j < 1; j++, i++) /* R4 = i, R5 = jMOV(INDD(R2, IMM(i)), INDD(R3, IMM(j)) */;
MOV(R4, IMM(1));
MOV(R5, IMM(0));
LabelEnvLoop15:
CMP(R5,IMM(1));
JUMP_GE(LabelEnvLoopExit15);
MOV(INDD(R2, R4), INDD(R3, R5));
INCR(R4);
INCR(R5);
JUMP(LabelEnvLoop15);
LabelEnvLoopExit15: 
/* Clone the parameters (If needed) - Malloc(params.length): ... */
PUSH(IMM(1));
CALL(MALLOC);
DROP(IMM(1));

MOV(R3, R0); // R3 -> params.addr.. 
/* Loop through parameters and clone them (R5 = 2, R6 is the loop counter): */
MOV(INDD(R2,0), R3);
MOV(R5, IMM(2));
MOV(R6, IMM(0));
Labelparamsoop15:
CMP(R5,IMM(3));
JUMP_GE(LabelparamsoopExit15);
MOV(INDD(R3, R6), FPARG(R5));
//R2[0] -> new parameters
INCR(R5);
INCR(R6);
JUMP(Labelparamsoop15);
LabelparamsoopExit15: 
MOV(INDD(R10, 1), R2); // Parameters copied. the new env is at 1.
MOV(INDD(R10, IMM(2)), LABEL(LabelClosureBody15)); // Append the body
MOV(R0, R10);
JUMP(LabelClosureEnd15);
LabelClosureBody15:
PUSH(FP);
MOV(FP, SP);
/* -- createLambdaSimpleBody -- */
MOV(R1, FPARG(1));
CMP(R1, IMM(2));
JUMP_NE(ERROR);
/* CodeGen:*/
/* --- set! pvar: -- */
MOV(R10, IMM(0));
ADD(R10,IMM(2));
PUSH(IMM(1));
CALL(MALLOC);
DROP(IMM(1));
MOV(IND(R0),FPARG(R10));

MOV(FPARG(2), R0);
MOV(R0, SOB_VOID);

/* --- set! pvar: -- */
MOV(R10, IMM(1));
ADD(R10,IMM(2));
PUSH(IMM(1));
CALL(MALLOC);
DROP(IMM(1));
MOV(IND(R0),FPARG(R10));

MOV(FPARG(3), R0);
MOV(R0, SOB_VOID);



/* ---------------------------------------------- */
/*               Lambda Code: */
/* ---------------------------------------------- */
/* Malloc 3 for: closure, env and the body. */
PUSH(IMM(3));
CALL(MALLOC);
DROP(IMM(1));

MOV(R10,R0); /* R10 holds Addr of malloc */
MOV(INDD(R10,0), IMM(T_CLOSURE)); /* set T_Closure to location 0 */
/* Malloc(env.size()+1): */
PUSH(IMM(3));
CALL(MALLOC);
DROP(IMM(1));
MOV(R2,R0); /* R2 -> new env addr */
MOV(R3, FPARG(0)); /* R3 = old env adress */
/*Clone the new environment:
for (i = 1, j = 0; j < 2; j++, i++) /* R4 = i, R5 = jMOV(INDD(R2, IMM(i)), INDD(R3, IMM(j)) */;
MOV(R4, IMM(1));
MOV(R5, IMM(0));
LabelEnvLoop16:
CMP(R5,IMM(2));
JUMP_GE(LabelEnvLoopExit16);
MOV(INDD(R2, R4), INDD(R3, R5));
INCR(R4);
INCR(R5);
JUMP(LabelEnvLoop16);
LabelEnvLoopExit16: 
/* Clone the parameters (If needed) - Malloc(params.length): ... */
PUSH(IMM(2));
CALL(MALLOC);
DROP(IMM(1));

MOV(R3, R0); // R3 -> params.addr.. 
/* Loop through parameters and clone them (R5 = 2, R6 is the loop counter): */
MOV(INDD(R2,0), R3);
MOV(R5, IMM(2));
MOV(R6, IMM(0));
Labelparamsoop16:
CMP(R5,IMM(4));
JUMP_GE(LabelparamsoopExit16);
MOV(INDD(R3, R6), FPARG(R5));
//R2[0] -> new parameters
INCR(R5);
INCR(R6);
JUMP(Labelparamsoop16);
LabelparamsoopExit16: 
MOV(INDD(R10, 1), R2); // Parameters copied. the new env is at 1.
MOV(INDD(R10, IMM(2)), LABEL(LabelClosureBody16)); // Append the body
MOV(R0, R10);
JUMP(LabelClosureEnd16);
LabelClosureBody16:
PUSH(FP);
MOV(FP, SP);
/* -- createLambdaSimpleBody -- */
MOV(R1, FPARG(1));
CMP(R1, IMM(2));
JUMP_NE(ERROR);
/* CodeGen:*/
/* - If Expression - */


/* ---------------------------------------------- */
/*                  Applic Code: */
/* ---------------------------------------------- */
/* Compiled params, in reverse order: */
/* --- P-Var: --- */
MOV(R0, FPARG(2));

PUSH(R0);
PUSH(IMM(1)) // Push Num of args;

/* The Compiled Function: */
/* --- F-Var: --- */
MOV(R1, IMM(701)); // Value of Free var bucket.Address
MOV(R2,INDD(R1,0));
MOV(R0,R2);
CMP(INDD(R0,0), IMM(T_CLOSURE));
JUMP_NE(ERROR);
PUSH(INDD(R0, IMM(1)));
CALLA(INDD(R0, IMM(2)));
MOV(R5,STARG(IMM(0))) // R5 = Number of args to drop;
ADD(R5, IMM(2)) // R5 = R5 + env + numOfArgs;
DROP(R5);

CMP(R0, FALSE);
JUMP_EQ(LabelIf3Else4);
/* --- P-Var: --- */
MOV(R0, FPARG(3));

JUMP(LabelIf3Exit4);
LabelIf3Else4:


/* ---------------------------------------------- */
/*                  Tail Applic Code: */
/* ---------------------------------------------- */


/* ---------------------------------------------- */
/*                  Applic Code: */
/* ---------------------------------------------- */
/* Compiled params, in reverse order: */
/* --- P-Var: --- */
MOV(R0, FPARG(3));

PUSH(R0);


/* ---------------------------------------------- */
/*                  Applic Code: */
/* ---------------------------------------------- */
/* Compiled params, in reverse order: */
/* --- P-Var: --- */
MOV(R0, FPARG(2));

PUSH(R0);
PUSH(IMM(1)) // Push Num of args;

/* The Compiled Function: */
/* --- F-Var: --- */
MOV(R1, IMM(611)); // Value of Free var bucket.Address
MOV(R2,INDD(R1,0));
MOV(R0,R2);
CMP(INDD(R0,0), IMM(T_CLOSURE));
JUMP_NE(ERROR);
PUSH(INDD(R0, IMM(1)));
CALLA(INDD(R0, IMM(2)));
MOV(R5,STARG(IMM(0))) // R5 = Number of args to drop;
ADD(R5, IMM(2)) // R5 = R5 + env + numOfArgs;
DROP(R5);

PUSH(R0);
PUSH(IMM(2)) // Push Num of args;

/* The Compiled Function: */
MOV(R1, FPARG(IMM(0)));
MOV(R1,INDD(R1,IMM(0)));
MOV(R1,INDD(R1,IMM(0)));
MOV(R0,IND(R1));
CMP(INDD(R0,0), IMM(T_CLOSURE));
JUMP_NE(ERROR);
PUSH(INDD(R0, IMM(1)));
CALLA(INDD(R0, IMM(2)));
MOV(R5,STARG(IMM(0))) // R5 = Number of args to drop;
ADD(R5, IMM(2)) // R5 = R5 + env + numOfArgs;
DROP(R5);

PUSH(R0);


/* ---------------------------------------------- */
/*                  Applic Code: */
/* ---------------------------------------------- */
/* Compiled params, in reverse order: */
/* --- P-Var: --- */
MOV(R0, FPARG(2));

PUSH(R0);
PUSH(IMM(1)) // Push Num of args;

/* The Compiled Function: */
/* --- F-Var: --- */
MOV(R1, IMM(616)); // Value of Free var bucket.Address
MOV(R2,INDD(R1,0));
MOV(R0,R2);
CMP(INDD(R0,0), IMM(T_CLOSURE));
JUMP_NE(ERROR);
PUSH(INDD(R0, IMM(1)));
CALLA(INDD(R0, IMM(2)));
MOV(R5,STARG(IMM(0))) // R5 = Number of args to drop;
ADD(R5, IMM(2)) // R5 = R5 + env + numOfArgs;
DROP(R5);

PUSH(R0);
 // Compile params and push (in reverse).
/* push number of args. */
PUSH(IMM(2));
/* Compile function and add it's code: */
/* --- F-Var: --- */
MOV(R1, IMM(621)); // Value of Free var bucket.Address
MOV(R2,INDD(R1,0));
MOV(R0,R2);
CMP(INDD(R0,0), IMM(T_CLOSURE)); // Check for errors
JUMP_NE(ERROR);
PUSH(INDD(R0,1)); // Push Environment
PUSH(FPARG(-1)); // Push Ret addr (from current frame)
MOV(R4, IMM(0)); // R4 will be the index
MOV(R6, IMM(3)); // R6 = Old STARG.offset
MOV(R8,FPARG(-2)); // R8 = old FP
MOV(R12,FPARG(1)); // R12 = Old argsCount
MOV(R13,STARG(1)); // R13 = New argsCount
MOV(R5, R12); // R5 = Old FPARG.offset
ADD(R5, IMM(1));
LabelTailLoop13:
CMP(R4, IMM(5));
JUMP_EQ(LabelTailExit13);
MOV(FPARG(R5), STARG(R6));
ADD(R4, IMM(1));
SUB(R5, IMM(1));
SUB(R6, IMM(1));
JUMP(LabelTailLoop13);
LabelTailExit13:
MOV(R9, R13);
SUB(R9, IMM(1));
SUB(R9, R12);
MOV(SP, FP);
ADD(SP, R9);
MOV(FP, R8);
JUMPA(INDD(R0, 2));

LabelIf3Exit4:
/* CodeGen-End*/

POP(FP);
RETURN;
LabelClosureEnd16:

MOV(R1, IMM(0));
ADD(R1,IMM(2));
MOV(IND(FPARG(R1)),R0);



/* ---------------------------------------------- */
/*               Lambda Code: */
/* ---------------------------------------------- */
/* Malloc 3 for: closure, env and the body. */
PUSH(IMM(3));
CALL(MALLOC);
DROP(IMM(1));

MOV(R10,R0); /* R10 holds Addr of malloc */
MOV(INDD(R10,0), IMM(T_CLOSURE)); /* set T_Closure to location 0 */
/* Malloc(env.size()+1): */
PUSH(IMM(3));
CALL(MALLOC);
DROP(IMM(1));
MOV(R2,R0); /* R2 -> new env addr */
MOV(R3, FPARG(0)); /* R3 = old env adress */
/*Clone the new environment:
for (i = 1, j = 0; j < 2; j++, i++) /* R4 = i, R5 = jMOV(INDD(R2, IMM(i)), INDD(R3, IMM(j)) */;
MOV(R4, IMM(1));
MOV(R5, IMM(0));
LabelEnvLoop17:
CMP(R5,IMM(2));
JUMP_GE(LabelEnvLoopExit17);
MOV(INDD(R2, R4), INDD(R3, R5));
INCR(R4);
INCR(R5);
JUMP(LabelEnvLoop17);
LabelEnvLoopExit17: 
/* Clone the parameters (If needed) - Malloc(params.length): ... */
PUSH(IMM(2));
CALL(MALLOC);
DROP(IMM(1));

MOV(R3, R0); // R3 -> params.addr.. 
/* Loop through parameters and clone them (R5 = 2, R6 is the loop counter): */
MOV(INDD(R2,0), R3);
MOV(R5, IMM(2));
MOV(R6, IMM(0));
Labelparamsoop17:
CMP(R5,IMM(4));
JUMP_GE(LabelparamsoopExit17);
MOV(INDD(R3, R6), FPARG(R5));
//R2[0] -> new parameters
INCR(R5);
INCR(R6);
JUMP(Labelparamsoop17);
LabelparamsoopExit17: 
MOV(INDD(R10, 1), R2); // Parameters copied. the new env is at 1.
MOV(INDD(R10, IMM(2)), LABEL(LabelClosureBody17)); // Append the body
MOV(R0, R10);
JUMP(LabelClosureEnd17);
LabelClosureBody17:
PUSH(FP);
MOV(FP, SP);
/* -- createLambdaSimpleBody -- */
MOV(R1, FPARG(1));
CMP(R1, IMM(2));
JUMP_NE(ERROR);
/* CodeGen:*/
/* - If Expression - */


/* ---------------------------------------------- */
/*                  Applic Code: */
/* ---------------------------------------------- */
/* Compiled params, in reverse order: */
/* --- P-Var: --- */
MOV(R0, FPARG(3));

PUSH(R0);
PUSH(IMM(1)) // Push Num of args;

/* The Compiled Function: */
/* --- F-Var: --- */
MOV(R1, IMM(701)); // Value of Free var bucket.Address
MOV(R2,INDD(R1,0));
MOV(R0,R2);
CMP(INDD(R0,0), IMM(T_CLOSURE));
JUMP_NE(ERROR);
PUSH(INDD(R0, IMM(1)));
CALLA(INDD(R0, IMM(2)));
MOV(R5,STARG(IMM(0))) // R5 = Number of args to drop;
ADD(R5, IMM(2)) // R5 = R5 + env + numOfArgs;
DROP(R5);

CMP(R0, FALSE);
JUMP_EQ(LabelIf3Else5);
/* --- P-Var: --- */
MOV(R0, FPARG(2));

JUMP(LabelIf3Exit5);
LabelIf3Else5:


/* ---------------------------------------------- */
/*                  Tail Applic Code: */
/* ---------------------------------------------- */


/* ---------------------------------------------- */
/*                  Applic Code: */
/* ---------------------------------------------- */
/* Compiled params, in reverse order: */


/* ---------------------------------------------- */
/*                  Applic Code: */
/* ---------------------------------------------- */
/* Compiled params, in reverse order: */
/* --- P-Var: --- */
MOV(R0, FPARG(3));

PUSH(R0);
PUSH(IMM(1)) // Push Num of args;

/* The Compiled Function: */
/* --- F-Var: --- */
MOV(R1, IMM(611)); // Value of Free var bucket.Address
MOV(R2,INDD(R1,0));
MOV(R0,R2);
CMP(INDD(R0,0), IMM(T_CLOSURE));
JUMP_NE(ERROR);
PUSH(INDD(R0, IMM(1)));
CALLA(INDD(R0, IMM(2)));
MOV(R5,STARG(IMM(0))) // R5 = Number of args to drop;
ADD(R5, IMM(2)) // R5 = R5 + env + numOfArgs;
DROP(R5);

PUSH(R0);


/* ---------------------------------------------- */
/*                  Applic Code: */
/* ---------------------------------------------- */
/* Compiled params, in reverse order: */
/* --- P-Var: --- */
MOV(R0, FPARG(3));

PUSH(R0);
PUSH(IMM(1)) // Push Num of args;

/* The Compiled Function: */
/* --- F-Var: --- */
MOV(R1, IMM(616)); // Value of Free var bucket.Address
MOV(R2,INDD(R1,0));
MOV(R0,R2);
CMP(INDD(R0,0), IMM(T_CLOSURE));
JUMP_NE(ERROR);
PUSH(INDD(R0, IMM(1)));
CALLA(INDD(R0, IMM(2)));
MOV(R5,STARG(IMM(0))) // R5 = Number of args to drop;
ADD(R5, IMM(2)) // R5 = R5 + env + numOfArgs;
DROP(R5);

PUSH(R0);
PUSH(IMM(2)) // Push Num of args;

/* The Compiled Function: */
MOV(R1, FPARG(IMM(0)));
MOV(R1,INDD(R1,IMM(0)));
MOV(R1,INDD(R1,IMM(1)));
MOV(R0,IND(R1));
CMP(INDD(R0,0), IMM(T_CLOSURE));
JUMP_NE(ERROR);
PUSH(INDD(R0, IMM(1)));
CALLA(INDD(R0, IMM(2)));
MOV(R5,STARG(IMM(0))) // R5 = Number of args to drop;
ADD(R5, IMM(2)) // R5 = R5 + env + numOfArgs;
DROP(R5);

PUSH(R0);
/* --- P-Var: --- */
MOV(R0, FPARG(2));

PUSH(R0);
 // Compile params and push (in reverse).
/* push number of args. */
PUSH(IMM(2));
/* Compile function and add it's code: */
MOV(R1, FPARG(IMM(0)));
MOV(R1,INDD(R1,IMM(0)));
MOV(R1,INDD(R1,IMM(0)));
MOV(R0,IND(R1));
CMP(INDD(R0,0), IMM(T_CLOSURE)); // Check for errors
JUMP_NE(ERROR);
PUSH(INDD(R0,1)); // Push Environment
PUSH(FPARG(-1)); // Push Ret addr (from current frame)
MOV(R4, IMM(0)); // R4 will be the index
MOV(R6, IMM(3)); // R6 = Old STARG.offset
MOV(R8,FPARG(-2)); // R8 = old FP
MOV(R12,FPARG(1)); // R12 = Old argsCount
MOV(R13,STARG(1)); // R13 = New argsCount
MOV(R5, R12); // R5 = Old FPARG.offset
ADD(R5, IMM(1));
LabelTailLoop14:
CMP(R4, IMM(5));
JUMP_EQ(LabelTailExit14);
MOV(FPARG(R5), STARG(R6));
ADD(R4, IMM(1));
SUB(R5, IMM(1));
SUB(R6, IMM(1));
JUMP(LabelTailLoop14);
LabelTailExit14:
MOV(R9, R13);
SUB(R9, IMM(1));
SUB(R9, R12);
MOV(SP, FP);
ADD(SP, R9);
MOV(FP, R8);
JUMPA(INDD(R0, 2));

LabelIf3Exit5:
/* CodeGen-End*/

POP(FP);
RETURN;
LabelClosureEnd17:

MOV(R1, IMM(1));
ADD(R1,IMM(2));
MOV(IND(FPARG(R1)),R0);

/* - If Expression - */


/* ---------------------------------------------- */
/*                  Applic Code: */
/* ---------------------------------------------- */
/* Compiled params, in reverse order: */
/* --- B-Var: --- */
MOV(R1,FPARG(LOC_ENV));
MOV(R2,INDD(R1,IMM(0)));
MOV(R3,INDD(R2,IMM(0)));
MOV(R0,R3);

PUSH(R0);
PUSH(IMM(1)) // Push Num of args;

/* The Compiled Function: */
/* --- F-Var: --- */
MOV(R1, IMM(701)); // Value of Free var bucket.Address
MOV(R2,INDD(R1,0));
MOV(R0,R2);
CMP(INDD(R0,0), IMM(T_CLOSURE));
JUMP_NE(ERROR);
PUSH(INDD(R0, IMM(1)));
CALLA(INDD(R0, IMM(2)));
MOV(R5,STARG(IMM(0))) // R5 = Number of args to drop;
ADD(R5, IMM(2)) // R5 = R5 + env + numOfArgs;
DROP(R5);

CMP(R0, FALSE);
JUMP_EQ(LabelIf3Else3);
/* In constants .. */
MOV(R0,IMM(2));
JUMP(LabelIf3Exit3);
LabelIf3Else3:


/* ---------------------------------------------- */
/*                  Tail Applic Code: */
/* ---------------------------------------------- */


/* ---------------------------------------------- */
/*                  Applic Code: */
/* ---------------------------------------------- */
/* Compiled params, in reverse order: */
/* --- B-Var: --- */
MOV(R1,FPARG(LOC_ENV));
MOV(R2,INDD(R1,IMM(0)));
MOV(R3,INDD(R2,IMM(0)));
MOV(R0,R3);

PUSH(R0);
PUSH(IMM(1)) // Push Num of args;

/* The Compiled Function: */
/* --- F-Var: --- */
MOV(R1, IMM(611)); // Value of Free var bucket.Address
MOV(R2,INDD(R1,0));
MOV(R0,R2);
CMP(INDD(R0,0), IMM(T_CLOSURE));
JUMP_NE(ERROR);
PUSH(INDD(R0, IMM(1)));
CALLA(INDD(R0, IMM(2)));
MOV(R5,STARG(IMM(0))) // R5 = Number of args to drop;
ADD(R5, IMM(2)) // R5 = R5 + env + numOfArgs;
DROP(R5);

PUSH(R0);


/* ---------------------------------------------- */
/*                  Applic Code: */
/* ---------------------------------------------- */
/* Compiled params, in reverse order: */
/* --- B-Var: --- */
MOV(R1,FPARG(LOC_ENV));
MOV(R2,INDD(R1,IMM(0)));
MOV(R3,INDD(R2,IMM(0)));
MOV(R0,R3);

PUSH(R0);
PUSH(IMM(1)) // Push Num of args;

/* The Compiled Function: */
/* --- F-Var: --- */
MOV(R1, IMM(616)); // Value of Free var bucket.Address
MOV(R2,INDD(R1,0));
MOV(R0,R2);
CMP(INDD(R0,0), IMM(T_CLOSURE));
JUMP_NE(ERROR);
PUSH(INDD(R0, IMM(1)));
CALLA(INDD(R0, IMM(2)));
MOV(R5,STARG(IMM(0))) // R5 = Number of args to drop;
ADD(R5, IMM(2)) // R5 = R5 + env + numOfArgs;
DROP(R5);

PUSH(R0);
 // Compile params and push (in reverse).
/* push number of args. */
PUSH(IMM(2));
/* Compile function and add it's code: */
MOV(R10, IMM(1));
ADD(R10,IMM(2));
MOV(R0,IND(FPARG(R10)));
CMP(INDD(R0,0), IMM(T_CLOSURE)); // Check for errors
JUMP_NE(ERROR);
PUSH(INDD(R0,1)); // Push Environment
PUSH(FPARG(-1)); // Push Ret addr (from current frame)
MOV(R4, IMM(0)); // R4 will be the index
MOV(R6, IMM(3)); // R6 = Old STARG.offset
MOV(R8,FPARG(-2)); // R8 = old FP
MOV(R12,FPARG(1)); // R12 = Old argsCount
MOV(R13,STARG(1)); // R13 = New argsCount
MOV(R5, R12); // R5 = Old FPARG.offset
ADD(R5, IMM(1));
LabelTailLoop12:
CMP(R4, IMM(5));
JUMP_EQ(LabelTailExit12);
MOV(FPARG(R5), STARG(R6));
ADD(R4, IMM(1));
SUB(R5, IMM(1));
SUB(R6, IMM(1));
JUMP(LabelTailLoop12);
LabelTailExit12:
MOV(R9, R13);
SUB(R9, IMM(1));
SUB(R9, R12);
MOV(SP, FP);
ADD(SP, R9);
MOV(FP, R8);
JUMPA(INDD(R0, 2));

LabelIf3Exit3:

/* CodeGen-End*/

POP(FP);
RETURN;
LabelClosureEnd15:
CMP(INDD(R0,0), IMM(T_CLOSURE)); // Check for errors
JUMP_NE(ERROR);
PUSH(INDD(R0,1)); // Push Environment
PUSH(FPARG(-1)); // Push Ret addr (from current frame)
MOV(R4, IMM(0)); // R4 will be the index
MOV(R6, IMM(3)); // R6 = Old STARG.offset
MOV(R8,FPARG(-2)); // R8 = old FP
MOV(R12,FPARG(1)); // R12 = Old argsCount
MOV(R13,STARG(1)); // R13 = New argsCount
MOV(R5, R12); // R5 = Old FPARG.offset
ADD(R5, IMM(1));
LabelTailLoop11:
CMP(R4, IMM(5));
JUMP_EQ(LabelTailExit11);
MOV(FPARG(R5), STARG(R6));
ADD(R4, IMM(1));
SUB(R5, IMM(1));
SUB(R6, IMM(1));
JUMP(LabelTailLoop11);
LabelTailExit11:
MOV(R9, R13);
SUB(R9, IMM(1));
SUB(R9, R12);
MOV(SP, FP);
ADD(SP, R9);
MOV(FP, R8);
JUMPA(INDD(R0, 2));

POP(FP);
RETURN;
LabelClosureEnd14:

MOV(ADDR(501), R0);
MOV(R0, SOB_VOID);


CALL(PRINT_R0_VALUE);



/* --- Define: -- */


/* ---------------------------------------------- */
/*                  Applic Code: */
/* ---------------------------------------------- */
/* Compiled params, in reverse order: */


/* ---------------------------------------------- */
/*               Lambda Code: */
/* ---------------------------------------------- */
/* Malloc 3 for: closure, env and the body. */
PUSH(IMM(3));
CALL(MALLOC);
DROP(IMM(1));

MOV(R10,R0); /* R10 holds Addr of malloc */
MOV(INDD(R10,0), IMM(T_CLOSURE)); /* set T_Closure to location 0 */
/* Malloc(env.size()+1): */
PUSH(IMM(1));
CALL(MALLOC);
DROP(IMM(1));
MOV(R2,R0); /* R2 -> new env addr */
MOV(R3, FPARG(0)); /* R3 = old env adress */
/*Clone the new environment:
for (i = 1, j = 0; j < 0; j++, i++) /* R4 = i, R5 = jMOV(INDD(R2, IMM(i)), INDD(R3, IMM(j)) */;
MOV(R4, IMM(1));
MOV(R5, IMM(0));
LabelEnvLoop9:
CMP(R5,IMM(0));
JUMP_GE(LabelEnvLoopExit9);
MOV(INDD(R2, R4), INDD(R3, R5));
INCR(R4);
INCR(R5);
JUMP(LabelEnvLoop9);
LabelEnvLoopExit9: 
/* Clone the parameters (If needed) - Malloc(params.length): ... */
PUSH(IMM(0));
CALL(MALLOC);
DROP(IMM(1));

MOV(R3, R0); // R3 -> params.addr.. 
/* Loop through parameters and clone them (R5 = 2, R6 is the loop counter): */
MOV(INDD(R2,0), R3);
MOV(R5, IMM(2));
MOV(R6, IMM(0));
Labelparamsoop9:
CMP(R5,IMM(2));
JUMP_GE(LabelparamsoopExit9);
MOV(INDD(R3, R6), FPARG(R5));
//R2[0] -> new parameters
INCR(R5);
INCR(R6);
JUMP(Labelparamsoop9);
LabelparamsoopExit9: 
MOV(INDD(R10, 1), R2); // Parameters copied. the new env is at 1.
MOV(INDD(R10, IMM(2)), LABEL(LabelClosureBody9)); // Append the body
MOV(R0, R10);
JUMP(LabelClosureEnd9);
LabelClosureBody9:
PUSH(FP);
MOV(FP, SP);
/* -- createLambdaSimpleBody -- */
MOV(R1, FPARG(1));
CMP(R1, IMM(1));
JUMP_NE(ERROR);
/* CodeGen:*/


/* ---------------------------------------------- */
/*                  Tail Applic Code: */
/* ---------------------------------------------- */


/* ---------------------------------------------- */
/*               Lambda Code: */
/* ---------------------------------------------- */
/* Malloc 3 for: closure, env and the body. */
PUSH(IMM(3));
CALL(MALLOC);
DROP(IMM(1));

MOV(R10,R0); /* R10 holds Addr of malloc */
MOV(INDD(R10,0), IMM(T_CLOSURE)); /* set T_Closure to location 0 */
/* Malloc(env.size()+1): */
PUSH(IMM(2));
CALL(MALLOC);
DROP(IMM(1));
MOV(R2,R0); /* R2 -> new env addr */
MOV(R3, FPARG(0)); /* R3 = old env adress */
/*Clone the new environment:
for (i = 1, j = 0; j < 1; j++, i++) /* R4 = i, R5 = jMOV(INDD(R2, IMM(i)), INDD(R3, IMM(j)) */;
MOV(R4, IMM(1));
MOV(R5, IMM(0));
LabelEnvLoop12:
CMP(R5,IMM(1));
JUMP_GE(LabelEnvLoopExit12);
MOV(INDD(R2, R4), INDD(R3, R5));
INCR(R4);
INCR(R5);
JUMP(LabelEnvLoop12);
LabelEnvLoopExit12: 
/* Clone the parameters (If needed) - Malloc(params.length): ... */
PUSH(IMM(1));
CALL(MALLOC);
DROP(IMM(1));

MOV(R3, R0); // R3 -> params.addr.. 
/* Loop through parameters and clone them (R5 = 2, R6 is the loop counter): */
MOV(INDD(R2,0), R3);
MOV(R5, IMM(2));
MOV(R6, IMM(0));
Labelparamsoop12:
CMP(R5,IMM(3));
JUMP_GE(LabelparamsoopExit12);
MOV(INDD(R3, R6), FPARG(R5));
//R2[0] -> new parameters
INCR(R5);
INCR(R6);
JUMP(Labelparamsoop12);
LabelparamsoopExit12: 
MOV(INDD(R10, 1), R2); // Parameters copied. the new env is at 1.
MOV(INDD(R10, IMM(2)), LABEL(LabelClosureBody12)); // Append the body
MOV(R0, R10);
JUMP(LabelClosureEnd12);
LabelClosureBody12:
PUSH(FP);
MOV(FP, SP);
/* -- createLambdaSimpleBody -- */
MOV(R1, FPARG(1));
CMP(R1, IMM(1));
JUMP_NE(ERROR);
/* CodeGen:*/


/* ---------------------------------------------- */
/*                  Tail Applic Code: */
/* ---------------------------------------------- */


/* ---------------------------------------------- */
/*               Lambda Code: */
/* ---------------------------------------------- */
/* Malloc 3 for: closure, env and the body. */
PUSH(IMM(3));
CALL(MALLOC);
DROP(IMM(1));

MOV(R10,R0); /* R10 holds Addr of malloc */
MOV(INDD(R10,0), IMM(T_CLOSURE)); /* set T_Closure to location 0 */
/* Malloc(env.size()+1): */
PUSH(IMM(3));
CALL(MALLOC);
DROP(IMM(1));
MOV(R2,R0); /* R2 -> new env addr */
MOV(R3, FPARG(0)); /* R3 = old env adress */
/*Clone the new environment:
for (i = 1, j = 0; j < 2; j++, i++) /* R4 = i, R5 = jMOV(INDD(R2, IMM(i)), INDD(R3, IMM(j)) */;
MOV(R4, IMM(1));
MOV(R5, IMM(0));
LabelEnvLoop13:
CMP(R5,IMM(2));
JUMP_GE(LabelEnvLoopExit13);
MOV(INDD(R2, R4), INDD(R3, R5));
INCR(R4);
INCR(R5);
JUMP(LabelEnvLoop13);
LabelEnvLoopExit13: 
/* Clone the parameters (If needed) - Malloc(params.length): ... */
PUSH(IMM(1));
CALL(MALLOC);
DROP(IMM(1));

MOV(R3, R0); // R3 -> params.addr.. 
/* Loop through parameters and clone them (R5 = 2, R6 is the loop counter): */
MOV(INDD(R2,0), R3);
MOV(R5, IMM(2));
MOV(R6, IMM(0));
Labelparamsoop13:
CMP(R5,IMM(3));
JUMP_GE(LabelparamsoopExit13);
MOV(INDD(R3, R6), FPARG(R5));
//R2[0] -> new parameters
INCR(R5);
INCR(R6);
JUMP(Labelparamsoop13);
LabelparamsoopExit13: 
MOV(INDD(R10, 1), R2); // Parameters copied. the new env is at 1.
MOV(INDD(R10, IMM(2)), LABEL(LabelClosureBody13)); // Append the body
MOV(R0, R10);
JUMP(LabelClosureEnd13);
LabelClosureBody13:
PUSH(FP);
MOV(FP, SP);
/* -- createLambdaSimpleBody -- */
MOV(R1, FPARG(1));
CMP(R1, IMM(2));
JUMP_NE(ERROR);
/* CodeGen:*/


/* ---------------------------------------------- */
/*                  Tail Applic Code: */
/* ---------------------------------------------- */
/* --- P-Var: --- */
MOV(R0, FPARG(3));

PUSH(R0);
/* --- P-Var: --- */
MOV(R0, FPARG(2));

PUSH(R0);
 // Compile params and push (in reverse).
/* push number of args. */
PUSH(IMM(2));
/* Compile function and add it's code: */


/* ---------------------------------------------- */
/*                  Applic Code: */
/* ---------------------------------------------- */
/* Compiled params, in reverse order: */
/* --- B-Var: --- */
MOV(R1,FPARG(LOC_ENV));
MOV(R2,INDD(R1,IMM(0)));
MOV(R3,INDD(R2,IMM(0)));
MOV(R0,R3);

PUSH(R0);
PUSH(IMM(1)) // Push Num of args;

/* The Compiled Function: */
/* --- B-Var: --- */
MOV(R1,FPARG(LOC_ENV));
MOV(R2,INDD(R1,IMM(0)));
MOV(R3,INDD(R2,IMM(0)));
MOV(R0,R3);
CMP(INDD(R0,0), IMM(T_CLOSURE));
JUMP_NE(ERROR);
PUSH(INDD(R0, IMM(1)));
CALLA(INDD(R0, IMM(2)));
MOV(R5,STARG(IMM(0))) // R5 = Number of args to drop;
ADD(R5, IMM(2)) // R5 = R5 + env + numOfArgs;
DROP(R5);
CMP(INDD(R0,0), IMM(T_CLOSURE)); // Check for errors
JUMP_NE(ERROR);
PUSH(INDD(R0,1)); // Push Environment
PUSH(FPARG(-1)); // Push Ret addr (from current frame)
MOV(R4, IMM(0)); // R4 will be the index
MOV(R6, IMM(3)); // R6 = Old STARG.offset
MOV(R8,FPARG(-2)); // R8 = old FP
MOV(R12,FPARG(1)); // R12 = Old argsCount
MOV(R13,STARG(1)); // R13 = New argsCount
MOV(R5, R12); // R5 = Old FPARG.offset
ADD(R5, IMM(1));
LabelTailLoop10:
CMP(R4, IMM(5));
JUMP_EQ(LabelTailExit10);
MOV(FPARG(R5), STARG(R6));
ADD(R4, IMM(1));
SUB(R5, IMM(1));
SUB(R6, IMM(1));
JUMP(LabelTailLoop10);
LabelTailExit10:
MOV(R9, R13);
SUB(R9, IMM(1));
SUB(R9, R12);
MOV(SP, FP);
ADD(SP, R9);
MOV(FP, R8);
JUMPA(INDD(R0, 2));
/* CodeGen-End*/

POP(FP);
RETURN;
LabelClosureEnd13:

PUSH(R0);
 // Compile params and push (in reverse).
/* push number of args. */
PUSH(IMM(1));
/* Compile function and add it's code: */
/* --- B-Var: --- */
MOV(R1,FPARG(LOC_ENV));
MOV(R2,INDD(R1,IMM(0)));
MOV(R3,INDD(R2,IMM(0)));
MOV(R0,R3);
CMP(INDD(R0,0), IMM(T_CLOSURE)); // Check for errors
JUMP_NE(ERROR);
PUSH(INDD(R0,1)); // Push Environment
PUSH(FPARG(-1)); // Push Ret addr (from current frame)
MOV(R4, IMM(0)); // R4 will be the index
MOV(R6, IMM(2)); // R6 = Old STARG.offset
MOV(R8,FPARG(-2)); // R8 = old FP
MOV(R12,FPARG(1)); // R12 = Old argsCount
MOV(R13,STARG(1)); // R13 = New argsCount
MOV(R5, R12); // R5 = Old FPARG.offset
ADD(R5, IMM(1));
LabelTailLoop9:
CMP(R4, IMM(4));
JUMP_EQ(LabelTailExit9);
MOV(FPARG(R5), STARG(R6));
ADD(R4, IMM(1));
SUB(R5, IMM(1));
SUB(R6, IMM(1));
JUMP(LabelTailLoop9);
LabelTailExit9:
MOV(R9, R13);
SUB(R9, IMM(1));
SUB(R9, R12);
MOV(SP, FP);
ADD(SP, R9);
MOV(FP, R8);
JUMPA(INDD(R0, 2));
/* CodeGen-End*/

POP(FP);
RETURN;
LabelClosureEnd12:

PUSH(R0);
 // Compile params and push (in reverse).
/* push number of args. */
PUSH(IMM(1));
/* Compile function and add it's code: */


/* ---------------------------------------------- */
/*               Lambda Code: */
/* ---------------------------------------------- */
/* Malloc 3 for: closure, env and the body. */
PUSH(IMM(3));
CALL(MALLOC);
DROP(IMM(1));

MOV(R10,R0); /* R10 holds Addr of malloc */
MOV(INDD(R10,0), IMM(T_CLOSURE)); /* set T_Closure to location 0 */
/* Malloc(env.size()+1): */
PUSH(IMM(2));
CALL(MALLOC);
DROP(IMM(1));
MOV(R2,R0); /* R2 -> new env addr */
MOV(R3, FPARG(0)); /* R3 = old env adress */
/*Clone the new environment:
for (i = 1, j = 0; j < 1; j++, i++) /* R4 = i, R5 = jMOV(INDD(R2, IMM(i)), INDD(R3, IMM(j)) */;
MOV(R4, IMM(1));
MOV(R5, IMM(0));
LabelEnvLoop10:
CMP(R5,IMM(1));
JUMP_GE(LabelEnvLoopExit10);
MOV(INDD(R2, R4), INDD(R3, R5));
INCR(R4);
INCR(R5);
JUMP(LabelEnvLoop10);
LabelEnvLoopExit10: 
/* Clone the parameters (If needed) - Malloc(params.length): ... */
PUSH(IMM(1));
CALL(MALLOC);
DROP(IMM(1));

MOV(R3, R0); // R3 -> params.addr.. 
/* Loop through parameters and clone them (R5 = 2, R6 is the loop counter): */
MOV(INDD(R2,0), R3);
MOV(R5, IMM(2));
MOV(R6, IMM(0));
Labelparamsoop10:
CMP(R5,IMM(3));
JUMP_GE(LabelparamsoopExit10);
MOV(INDD(R3, R6), FPARG(R5));
//R2[0] -> new parameters
INCR(R5);
INCR(R6);
JUMP(Labelparamsoop10);
LabelparamsoopExit10: 
MOV(INDD(R10, 1), R2); // Parameters copied. the new env is at 1.
MOV(INDD(R10, IMM(2)), LABEL(LabelClosureBody10)); // Append the body
MOV(R0, R10);
JUMP(LabelClosureEnd10);
LabelClosureBody10:
PUSH(FP);
MOV(FP, SP);
/* -- createLambdaSimpleBody -- */
MOV(R1, FPARG(1));
CMP(R1, IMM(1));
JUMP_NE(ERROR);
/* CodeGen:*/


/* ---------------------------------------------- */
/*                  Tail Applic Code: */
/* ---------------------------------------------- */


/* ---------------------------------------------- */
/*               Lambda Code: */
/* ---------------------------------------------- */
/* Malloc 3 for: closure, env and the body. */
PUSH(IMM(3));
CALL(MALLOC);
DROP(IMM(1));

MOV(R10,R0); /* R10 holds Addr of malloc */
MOV(INDD(R10,0), IMM(T_CLOSURE)); /* set T_Closure to location 0 */
/* Malloc(env.size()+1): */
PUSH(IMM(3));
CALL(MALLOC);
DROP(IMM(1));
MOV(R2,R0); /* R2 -> new env addr */
MOV(R3, FPARG(0)); /* R3 = old env adress */
/*Clone the new environment:
for (i = 1, j = 0; j < 2; j++, i++) /* R4 = i, R5 = jMOV(INDD(R2, IMM(i)), INDD(R3, IMM(j)) */;
MOV(R4, IMM(1));
MOV(R5, IMM(0));
LabelEnvLoop11:
CMP(R5,IMM(2));
JUMP_GE(LabelEnvLoopExit11);
MOV(INDD(R2, R4), INDD(R3, R5));
INCR(R4);
INCR(R5);
JUMP(LabelEnvLoop11);
LabelEnvLoopExit11: 
/* Clone the parameters (If needed) - Malloc(params.length): ... */
PUSH(IMM(1));
CALL(MALLOC);
DROP(IMM(1));

MOV(R3, R0); // R3 -> params.addr.. 
/* Loop through parameters and clone them (R5 = 2, R6 is the loop counter): */
MOV(INDD(R2,0), R3);
MOV(R5, IMM(2));
MOV(R6, IMM(0));
Labelparamsoop11:
CMP(R5,IMM(3));
JUMP_GE(LabelparamsoopExit11);
MOV(INDD(R3, R6), FPARG(R5));
//R2[0] -> new parameters
INCR(R5);
INCR(R6);
JUMP(Labelparamsoop11);
LabelparamsoopExit11: 
MOV(INDD(R10, 1), R2); // Parameters copied. the new env is at 1.
MOV(INDD(R10, IMM(2)), LABEL(LabelClosureBody11)); // Append the body
MOV(R0, R10);
JUMP(LabelClosureEnd11);
LabelClosureBody11:
PUSH(FP);
MOV(FP, SP);
/* -- createLambdaSimpleBody -- */
MOV(R1, FPARG(1));
CMP(R1, IMM(2));
JUMP_NE(ERROR);
/* CodeGen:*/


/* ---------------------------------------------- */
/*                  Tail Applic Code: */
/* ---------------------------------------------- */
/* --- P-Var: --- */
MOV(R0, FPARG(3));

PUSH(R0);
/* --- P-Var: --- */
MOV(R0, FPARG(2));

PUSH(R0);
 // Compile params and push (in reverse).
/* push number of args. */
PUSH(IMM(2));
/* Compile function and add it's code: */


/* ---------------------------------------------- */
/*                  Applic Code: */
/* ---------------------------------------------- */
/* Compiled params, in reverse order: */
/* --- B-Var: --- */
MOV(R1,FPARG(LOC_ENV));
MOV(R2,INDD(R1,IMM(0)));
MOV(R3,INDD(R2,IMM(0)));
MOV(R0,R3);

PUSH(R0);
PUSH(IMM(1)) // Push Num of args;

/* The Compiled Function: */
/* --- B-Var: --- */
MOV(R1,FPARG(LOC_ENV));
MOV(R2,INDD(R1,IMM(0)));
MOV(R3,INDD(R2,IMM(0)));
MOV(R0,R3);
CMP(INDD(R0,0), IMM(T_CLOSURE));
JUMP_NE(ERROR);
PUSH(INDD(R0, IMM(1)));
CALLA(INDD(R0, IMM(2)));
MOV(R5,STARG(IMM(0))) // R5 = Number of args to drop;
ADD(R5, IMM(2)) // R5 = R5 + env + numOfArgs;
DROP(R5);
CMP(INDD(R0,0), IMM(T_CLOSURE)); // Check for errors
JUMP_NE(ERROR);
PUSH(INDD(R0,1)); // Push Environment
PUSH(FPARG(-1)); // Push Ret addr (from current frame)
MOV(R4, IMM(0)); // R4 will be the index
MOV(R6, IMM(3)); // R6 = Old STARG.offset
MOV(R8,FPARG(-2)); // R8 = old FP
MOV(R12,FPARG(1)); // R12 = Old argsCount
MOV(R13,STARG(1)); // R13 = New argsCount
MOV(R5, R12); // R5 = Old FPARG.offset
ADD(R5, IMM(1));
LabelTailLoop8:
CMP(R4, IMM(5));
JUMP_EQ(LabelTailExit8);
MOV(FPARG(R5), STARG(R6));
ADD(R4, IMM(1));
SUB(R5, IMM(1));
SUB(R6, IMM(1));
JUMP(LabelTailLoop8);
LabelTailExit8:
MOV(R9, R13);
SUB(R9, IMM(1));
SUB(R9, R12);
MOV(SP, FP);
ADD(SP, R9);
MOV(FP, R8);
JUMPA(INDD(R0, 2));
/* CodeGen-End*/

POP(FP);
RETURN;
LabelClosureEnd11:

PUSH(R0);
 // Compile params and push (in reverse).
/* push number of args. */
PUSH(IMM(1));
/* Compile function and add it's code: */
/* --- B-Var: --- */
MOV(R1,FPARG(LOC_ENV));
MOV(R2,INDD(R1,IMM(0)));
MOV(R3,INDD(R2,IMM(0)));
MOV(R0,R3);
CMP(INDD(R0,0), IMM(T_CLOSURE)); // Check for errors
JUMP_NE(ERROR);
PUSH(INDD(R0,1)); // Push Environment
PUSH(FPARG(-1)); // Push Ret addr (from current frame)
MOV(R4, IMM(0)); // R4 will be the index
MOV(R6, IMM(2)); // R6 = Old STARG.offset
MOV(R8,FPARG(-2)); // R8 = old FP
MOV(R12,FPARG(1)); // R12 = Old argsCount
MOV(R13,STARG(1)); // R13 = New argsCount
MOV(R5, R12); // R5 = Old FPARG.offset
ADD(R5, IMM(1));
LabelTailLoop7:
CMP(R4, IMM(4));
JUMP_EQ(LabelTailExit7);
MOV(FPARG(R5), STARG(R6));
ADD(R4, IMM(1));
SUB(R5, IMM(1));
SUB(R6, IMM(1));
JUMP(LabelTailLoop7);
LabelTailExit7:
MOV(R9, R13);
SUB(R9, IMM(1));
SUB(R9, R12);
MOV(SP, FP);
ADD(SP, R9);
MOV(FP, R8);
JUMPA(INDD(R0, 2));
/* CodeGen-End*/

POP(FP);
RETURN;
LabelClosureEnd10:
CMP(INDD(R0,0), IMM(T_CLOSURE)); // Check for errors
JUMP_NE(ERROR);
PUSH(INDD(R0,1)); // Push Environment
PUSH(FPARG(-1)); // Push Ret addr (from current frame)
MOV(R4, IMM(0)); // R4 will be the index
MOV(R6, IMM(2)); // R6 = Old STARG.offset
MOV(R8,FPARG(-2)); // R8 = old FP
MOV(R12,FPARG(1)); // R12 = Old argsCount
MOV(R13,STARG(1)); // R13 = New argsCount
MOV(R5, R12); // R5 = Old FPARG.offset
ADD(R5, IMM(1));
LabelTailLoop6:
CMP(R4, IMM(4));
JUMP_EQ(LabelTailExit6);
MOV(FPARG(R5), STARG(R6));
ADD(R4, IMM(1));
SUB(R5, IMM(1));
SUB(R6, IMM(1));
JUMP(LabelTailLoop6);
LabelTailExit6:
MOV(R9, R13);
SUB(R9, IMM(1));
SUB(R9, R12);
MOV(SP, FP);
ADD(SP, R9);
MOV(FP, R8);
JUMPA(INDD(R0, 2));
/* CodeGen-End*/

POP(FP);
RETURN;
LabelClosureEnd9:

PUSH(R0);
PUSH(IMM(1)) // Push Num of args;

/* The Compiled Function: */


/* ---------------------------------------------- */
/*               Lambda Code: */
/* ---------------------------------------------- */
/* Malloc 3 for: closure, env and the body. */
PUSH(IMM(3));
CALL(MALLOC);
DROP(IMM(1));

MOV(R10,R0); /* R10 holds Addr of malloc */
MOV(INDD(R10,0), IMM(T_CLOSURE)); /* set T_Closure to location 0 */
/* Malloc(env.size()+1): */
PUSH(IMM(1));
CALL(MALLOC);
DROP(IMM(1));
MOV(R2,R0); /* R2 -> new env addr */
MOV(R3, FPARG(0)); /* R3 = old env adress */
/*Clone the new environment:
for (i = 1, j = 0; j < 0; j++, i++) /* R4 = i, R5 = jMOV(INDD(R2, IMM(i)), INDD(R3, IMM(j)) */;
MOV(R4, IMM(1));
MOV(R5, IMM(0));
LabelEnvLoop1:
CMP(R5,IMM(0));
JUMP_GE(LabelEnvLoopExit1);
MOV(INDD(R2, R4), INDD(R3, R5));
INCR(R4);
INCR(R5);
JUMP(LabelEnvLoop1);
LabelEnvLoopExit1: 
/* Clone the parameters (If needed) - Malloc(params.length): ... */
PUSH(IMM(0));
CALL(MALLOC);
DROP(IMM(1));

MOV(R3, R0); // R3 -> params.addr.. 
/* Loop through parameters and clone them (R5 = 2, R6 is the loop counter): */
MOV(INDD(R2,0), R3);
MOV(R5, IMM(2));
MOV(R6, IMM(0));
Labelparamsoop1:
CMP(R5,IMM(2));
JUMP_GE(LabelparamsoopExit1);
MOV(INDD(R3, R6), FPARG(R5));
//R2[0] -> new parameters
INCR(R5);
INCR(R6);
JUMP(Labelparamsoop1);
LabelparamsoopExit1: 
MOV(INDD(R10, 1), R2); // Parameters copied. the new env is at 1.
MOV(INDD(R10, IMM(2)), LABEL(LabelClosureBody1)); // Append the body
MOV(R0, R10);
JUMP(LabelClosureEnd1);
LabelClosureBody1:
PUSH(FP);
MOV(FP, SP);
/* -- createLambdaSimpleBody -- */
MOV(R1, FPARG(1));
CMP(R1, IMM(1));
JUMP_NE(ERROR);
/* CodeGen:*/


/* ---------------------------------------------- */
/*                  Tail Applic Code: */
/* ---------------------------------------------- */


/* ---------------------------------------------- */
/*                  Applic Code: */
/* ---------------------------------------------- */
/* Compiled params, in reverse order: */


/* ---------------------------------------------- */
/*               Lambda Code: */
/* ---------------------------------------------- */
/* Malloc 3 for: closure, env and the body. */
PUSH(IMM(3));
CALL(MALLOC);
DROP(IMM(1));

MOV(R10,R0); /* R10 holds Addr of malloc */
MOV(INDD(R10,0), IMM(T_CLOSURE)); /* set T_Closure to location 0 */
/* Malloc(env.size()+1): */
PUSH(IMM(2));
CALL(MALLOC);
DROP(IMM(1));
MOV(R2,R0); /* R2 -> new env addr */
MOV(R3, FPARG(0)); /* R3 = old env adress */
/*Clone the new environment:
for (i = 1, j = 0; j < 1; j++, i++) /* R4 = i, R5 = jMOV(INDD(R2, IMM(i)), INDD(R3, IMM(j)) */;
MOV(R4, IMM(1));
MOV(R5, IMM(0));
LabelEnvLoop7:
CMP(R5,IMM(1));
JUMP_GE(LabelEnvLoopExit7);
MOV(INDD(R2, R4), INDD(R3, R5));
INCR(R4);
INCR(R5);
JUMP(LabelEnvLoop7);
LabelEnvLoopExit7: 
/* Clone the parameters (If needed) - Malloc(params.length): ... */
PUSH(IMM(1));
CALL(MALLOC);
DROP(IMM(1));

MOV(R3, R0); // R3 -> params.addr.. 
/* Loop through parameters and clone them (R5 = 2, R6 is the loop counter): */
MOV(INDD(R2,0), R3);
MOV(R5, IMM(2));
MOV(R6, IMM(0));
Labelparamsoop7:
CMP(R5,IMM(3));
JUMP_GE(LabelparamsoopExit7);
MOV(INDD(R3, R6), FPARG(R5));
//R2[0] -> new parameters
INCR(R5);
INCR(R6);
JUMP(Labelparamsoop7);
LabelparamsoopExit7: 
MOV(INDD(R10, 1), R2); // Parameters copied. the new env is at 1.
MOV(INDD(R10, IMM(2)), LABEL(LabelClosureBody7)); // Append the body
MOV(R0, R10);
JUMP(LabelClosureEnd7);
LabelClosureBody7:
PUSH(FP);
MOV(FP, SP);
/* -- createLambdaSimpleBody -- */
MOV(R1, FPARG(1));
CMP(R1, IMM(1));
JUMP_NE(ERROR);
/* CodeGen:*/


/* ---------------------------------------------- */
/*               Lambda Code: */
/* ---------------------------------------------- */
/* Malloc 3 for: closure, env and the body. */
PUSH(IMM(3));
CALL(MALLOC);
DROP(IMM(1));

MOV(R10,R0); /* R10 holds Addr of malloc */
MOV(INDD(R10,0), IMM(T_CLOSURE)); /* set T_Closure to location 0 */
/* Malloc(env.size()+1): */
PUSH(IMM(3));
CALL(MALLOC);
DROP(IMM(1));
MOV(R2,R0); /* R2 -> new env addr */
MOV(R3, FPARG(0)); /* R3 = old env adress */
/*Clone the new environment:
for (i = 1, j = 0; j < 2; j++, i++) /* R4 = i, R5 = jMOV(INDD(R2, IMM(i)), INDD(R3, IMM(j)) */;
MOV(R4, IMM(1));
MOV(R5, IMM(0));
LabelEnvLoop8:
CMP(R5,IMM(2));
JUMP_GE(LabelEnvLoopExit8);
MOV(INDD(R2, R4), INDD(R3, R5));
INCR(R4);
INCR(R5);
JUMP(LabelEnvLoop8);
LabelEnvLoopExit8: 
/* Clone the parameters (If needed) - Malloc(params.length): ... */
PUSH(IMM(1));
CALL(MALLOC);
DROP(IMM(1));

MOV(R3, R0); // R3 -> params.addr.. 
/* Loop through parameters and clone them (R5 = 2, R6 is the loop counter): */
MOV(INDD(R2,0), R3);
MOV(R5, IMM(2));
MOV(R6, IMM(0));
Labelparamsoop8:
CMP(R5,IMM(3));
JUMP_GE(LabelparamsoopExit8);
MOV(INDD(R3, R6), FPARG(R5));
//R2[0] -> new parameters
INCR(R5);
INCR(R6);
JUMP(Labelparamsoop8);
LabelparamsoopExit8: 
MOV(INDD(R10, 1), R2); // Parameters copied. the new env is at 1.
MOV(INDD(R10, IMM(2)), LABEL(LabelClosureBody8)); // Append the body
MOV(R0, R10);
JUMP(LabelClosureEnd8);
LabelClosureBody8:
PUSH(FP);
MOV(FP, SP);
/* -- createLambdaSimpleBody -- */
MOV(R1, FPARG(1));
CMP(R1, IMM(2));
JUMP_NE(ERROR);
/* CodeGen:*/
/* - If Expression - */


/* ---------------------------------------------- */
/*                  Applic Code: */
/* ---------------------------------------------- */
/* Compiled params, in reverse order: */
/* --- P-Var: --- */
MOV(R0, FPARG(3));

PUSH(R0);
PUSH(IMM(1)) // Push Num of args;

/* The Compiled Function: */
/* --- F-Var: --- */
MOV(R1, IMM(701)); // Value of Free var bucket.Address
MOV(R2,INDD(R1,0));
MOV(R0,R2);
CMP(INDD(R0,0), IMM(T_CLOSURE));
JUMP_NE(ERROR);
PUSH(INDD(R0, IMM(1)));
CALLA(INDD(R0, IMM(2)));
MOV(R5,STARG(IMM(0))) // R5 = Number of args to drop;
ADD(R5, IMM(2)) // R5 = R5 + env + numOfArgs;
DROP(R5);

CMP(R0, FALSE);
JUMP_EQ(LabelIf3Else2);
/* In constants .. */
MOV(R0,IMM(2));
JUMP(LabelIf3Exit2);
LabelIf3Else2:


/* ---------------------------------------------- */
/*                  Tail Applic Code: */
/* ---------------------------------------------- */


/* ---------------------------------------------- */
/*                  Applic Code: */
/* ---------------------------------------------- */
/* Compiled params, in reverse order: */


/* ---------------------------------------------- */
/*                  Applic Code: */
/* ---------------------------------------------- */
/* Compiled params, in reverse order: */
/* --- P-Var: --- */
MOV(R0, FPARG(3));

PUSH(R0);
PUSH(IMM(1)) // Push Num of args;

/* The Compiled Function: */
/* --- F-Var: --- */
MOV(R1, IMM(611)); // Value of Free var bucket.Address
MOV(R2,INDD(R1,0));
MOV(R0,R2);
CMP(INDD(R0,0), IMM(T_CLOSURE));
JUMP_NE(ERROR);
PUSH(INDD(R0, IMM(1)));
CALLA(INDD(R0, IMM(2)));
MOV(R5,STARG(IMM(0))) // R5 = Number of args to drop;
ADD(R5, IMM(2)) // R5 = R5 + env + numOfArgs;
DROP(R5);

PUSH(R0);
/* --- P-Var: --- */
MOV(R0, FPARG(2));

PUSH(R0);
PUSH(IMM(2)) // Push Num of args;

/* The Compiled Function: */
/* --- B-Var: --- */
MOV(R1,FPARG(LOC_ENV));
MOV(R2,INDD(R1,IMM(0)));
MOV(R3,INDD(R2,IMM(0)));
MOV(R0,R3);
CMP(INDD(R0,0), IMM(T_CLOSURE));
JUMP_NE(ERROR);
PUSH(INDD(R0, IMM(1)));
CALLA(INDD(R0, IMM(2)));
MOV(R5,STARG(IMM(0))) // R5 = Number of args to drop;
ADD(R5, IMM(2)) // R5 = R5 + env + numOfArgs;
DROP(R5);

PUSH(R0);


/* ---------------------------------------------- */
/*                  Applic Code: */
/* ---------------------------------------------- */
/* Compiled params, in reverse order: */


/* ---------------------------------------------- */
/*                  Applic Code: */
/* ---------------------------------------------- */
/* Compiled params, in reverse order: */
/* --- P-Var: --- */
MOV(R0, FPARG(3));

PUSH(R0);
PUSH(IMM(1)) // Push Num of args;

/* The Compiled Function: */
/* --- F-Var: --- */
MOV(R1, IMM(616)); // Value of Free var bucket.Address
MOV(R2,INDD(R1,0));
MOV(R0,R2);
CMP(INDD(R0,0), IMM(T_CLOSURE));
JUMP_NE(ERROR);
PUSH(INDD(R0, IMM(1)));
CALLA(INDD(R0, IMM(2)));
MOV(R5,STARG(IMM(0))) // R5 = Number of args to drop;
ADD(R5, IMM(2)) // R5 = R5 + env + numOfArgs;
DROP(R5);

PUSH(R0);
PUSH(IMM(1)) // Push Num of args;

/* The Compiled Function: */
/* --- P-Var: --- */
MOV(R0, FPARG(2));
CMP(INDD(R0,0), IMM(T_CLOSURE));
JUMP_NE(ERROR);
PUSH(INDD(R0, IMM(1)));
CALLA(INDD(R0, IMM(2)));
MOV(R5,STARG(IMM(0))) // R5 = Number of args to drop;
ADD(R5, IMM(2)) // R5 = R5 + env + numOfArgs;
DROP(R5);

PUSH(R0);
 // Compile params and push (in reverse).
/* push number of args. */
PUSH(IMM(2));
/* Compile function and add it's code: */
/* --- F-Var: --- */
MOV(R1, IMM(621)); // Value of Free var bucket.Address
MOV(R2,INDD(R1,0));
MOV(R0,R2);
CMP(INDD(R0,0), IMM(T_CLOSURE)); // Check for errors
JUMP_NE(ERROR);
PUSH(INDD(R0,1)); // Push Environment
PUSH(FPARG(-1)); // Push Ret addr (from current frame)
MOV(R4, IMM(0)); // R4 will be the index
MOV(R6, IMM(3)); // R6 = Old STARG.offset
MOV(R8,FPARG(-2)); // R8 = old FP
MOV(R12,FPARG(1)); // R12 = Old argsCount
MOV(R13,STARG(1)); // R13 = New argsCount
MOV(R5, R12); // R5 = Old FPARG.offset
ADD(R5, IMM(1));
LabelTailLoop5:
CMP(R4, IMM(5));
JUMP_EQ(LabelTailExit5);
MOV(FPARG(R5), STARG(R6));
ADD(R4, IMM(1));
SUB(R5, IMM(1));
SUB(R6, IMM(1));
JUMP(LabelTailLoop5);
LabelTailExit5:
MOV(R9, R13);
SUB(R9, IMM(1));
SUB(R9, R12);
MOV(SP, FP);
ADD(SP, R9);
MOV(FP, R8);
JUMPA(INDD(R0, 2));

LabelIf3Exit2:
/* CodeGen-End*/

POP(FP);
RETURN;
LabelClosureEnd8:
/* CodeGen-End*/

POP(FP);
RETURN;
LabelClosureEnd7:

PUSH(R0);
PUSH(IMM(1)) // Push Num of args;

/* The Compiled Function: */
/* --- P-Var: --- */
MOV(R0, FPARG(2));
CMP(INDD(R0,0), IMM(T_CLOSURE));
JUMP_NE(ERROR);
PUSH(INDD(R0, IMM(1)));
CALLA(INDD(R0, IMM(2)));
MOV(R5,STARG(IMM(0))) // R5 = Number of args to drop;
ADD(R5, IMM(2)) // R5 = R5 + env + numOfArgs;
DROP(R5);

PUSH(R0);
 // Compile params and push (in reverse).
/* push number of args. */
PUSH(IMM(1));
/* Compile function and add it's code: */


/* ---------------------------------------------- */
/*               Lambda Code: */
/* ---------------------------------------------- */
/* Malloc 3 for: closure, env and the body. */
PUSH(IMM(3));
CALL(MALLOC);
DROP(IMM(1));

MOV(R10,R0); /* R10 holds Addr of malloc */
MOV(INDD(R10,0), IMM(T_CLOSURE)); /* set T_Closure to location 0 */
/* Malloc(env.size()+1): */
PUSH(IMM(2));
CALL(MALLOC);
DROP(IMM(1));
MOV(R2,R0); /* R2 -> new env addr */
MOV(R3, FPARG(0)); /* R3 = old env adress */
/*Clone the new environment:
for (i = 1, j = 0; j < 1; j++, i++) /* R4 = i, R5 = jMOV(INDD(R2, IMM(i)), INDD(R3, IMM(j)) */;
MOV(R4, IMM(1));
MOV(R5, IMM(0));
LabelEnvLoop2:
CMP(R5,IMM(1));
JUMP_GE(LabelEnvLoopExit2);
MOV(INDD(R2, R4), INDD(R3, R5));
INCR(R4);
INCR(R5);
JUMP(LabelEnvLoop2);
LabelEnvLoopExit2: 
/* Clone the parameters (If needed) - Malloc(params.length): ... */
PUSH(IMM(1));
CALL(MALLOC);
DROP(IMM(1));

MOV(R3, R0); // R3 -> params.addr.. 
/* Loop through parameters and clone them (R5 = 2, R6 is the loop counter): */
MOV(INDD(R2,0), R3);
MOV(R5, IMM(2));
MOV(R6, IMM(0));
Labelparamsoop2:
CMP(R5,IMM(3));
JUMP_GE(LabelparamsoopExit2);
MOV(INDD(R3, R6), FPARG(R5));
//R2[0] -> new parameters
INCR(R5);
INCR(R6);
JUMP(Labelparamsoop2);
LabelparamsoopExit2: 
MOV(INDD(R10, 1), R2); // Parameters copied. the new env is at 1.
MOV(INDD(R10, IMM(2)), LABEL(LabelClosureBody2)); // Append the body
MOV(R0, R10);
JUMP(LabelClosureEnd2);
LabelClosureBody2:
PUSH(FP);
MOV(FP, SP);
/* -- createLambdaSimpleBody -- */
MOV(R1, FPARG(1));
CMP(R1, IMM(1));
JUMP_NE(ERROR);
/* CodeGen:*/


/* ---------------------------------------------- */
/*                  Tail Applic Code: */
/* ---------------------------------------------- */


/* ---------------------------------------------- */
/*                  Applic Code: */
/* ---------------------------------------------- */
/* Compiled params, in reverse order: */


/* ---------------------------------------------- */
/*               Lambda Code: */
/* ---------------------------------------------- */
/* Malloc 3 for: closure, env and the body. */
PUSH(IMM(3));
CALL(MALLOC);
DROP(IMM(1));

MOV(R10,R0); /* R10 holds Addr of malloc */
MOV(INDD(R10,0), IMM(T_CLOSURE)); /* set T_Closure to location 0 */
/* Malloc(env.size()+1): */
PUSH(IMM(3));
CALL(MALLOC);
DROP(IMM(1));
MOV(R2,R0); /* R2 -> new env addr */
MOV(R3, FPARG(0)); /* R3 = old env adress */
/*Clone the new environment:
for (i = 1, j = 0; j < 2; j++, i++) /* R4 = i, R5 = jMOV(INDD(R2, IMM(i)), INDD(R3, IMM(j)) */;
MOV(R4, IMM(1));
MOV(R5, IMM(0));
LabelEnvLoop5:
CMP(R5,IMM(2));
JUMP_GE(LabelEnvLoopExit5);
MOV(INDD(R2, R4), INDD(R3, R5));
INCR(R4);
INCR(R5);
JUMP(LabelEnvLoop5);
LabelEnvLoopExit5: 
/* Clone the parameters (If needed) - Malloc(params.length): ... */
PUSH(IMM(1));
CALL(MALLOC);
DROP(IMM(1));

MOV(R3, R0); // R3 -> params.addr.. 
/* Loop through parameters and clone them (R5 = 2, R6 is the loop counter): */
MOV(INDD(R2,0), R3);
MOV(R5, IMM(2));
MOV(R6, IMM(0));
Labelparamsoop5:
CMP(R5,IMM(3));
JUMP_GE(LabelparamsoopExit5);
MOV(INDD(R3, R6), FPARG(R5));
//R2[0] -> new parameters
INCR(R5);
INCR(R6);
JUMP(Labelparamsoop5);
LabelparamsoopExit5: 
MOV(INDD(R10, 1), R2); // Parameters copied. the new env is at 1.
MOV(INDD(R10, IMM(2)), LABEL(LabelClosureBody5)); // Append the body
MOV(R0, R10);
JUMP(LabelClosureEnd5);
LabelClosureBody5:
PUSH(FP);
MOV(FP, SP);
/* -- createLambdaSimpleBody -- */
MOV(R1, FPARG(1));
CMP(R1, IMM(1));
JUMP_NE(ERROR);
/* CodeGen:*/


/* ---------------------------------------------- */
/*               Lambda Code: */
/* ---------------------------------------------- */
/* Malloc 3 for: closure, env and the body. */
PUSH(IMM(3));
CALL(MALLOC);
DROP(IMM(1));

MOV(R10,R0); /* R10 holds Addr of malloc */
MOV(INDD(R10,0), IMM(T_CLOSURE)); /* set T_Closure to location 0 */
/* Malloc(env.size()+1): */
PUSH(IMM(4));
CALL(MALLOC);
DROP(IMM(1));
MOV(R2,R0); /* R2 -> new env addr */
MOV(R3, FPARG(0)); /* R3 = old env adress */
/*Clone the new environment:
for (i = 1, j = 0; j < 3; j++, i++) /* R4 = i, R5 = jMOV(INDD(R2, IMM(i)), INDD(R3, IMM(j)) */;
MOV(R4, IMM(1));
MOV(R5, IMM(0));
LabelEnvLoop6:
CMP(R5,IMM(3));
JUMP_GE(LabelEnvLoopExit6);
MOV(INDD(R2, R4), INDD(R3, R5));
INCR(R4);
INCR(R5);
JUMP(LabelEnvLoop6);
LabelEnvLoopExit6: 
/* Clone the parameters (If needed) - Malloc(params.length): ... */
PUSH(IMM(1));
CALL(MALLOC);
DROP(IMM(1));

MOV(R3, R0); // R3 -> params.addr.. 
/* Loop through parameters and clone them (R5 = 2, R6 is the loop counter): */
MOV(INDD(R2,0), R3);
MOV(R5, IMM(2));
MOV(R6, IMM(0));
Labelparamsoop6:
CMP(R5,IMM(3));
JUMP_GE(LabelparamsoopExit6);
MOV(INDD(R3, R6), FPARG(R5));
//R2[0] -> new parameters
INCR(R5);
INCR(R6);
JUMP(Labelparamsoop6);
LabelparamsoopExit6: 
MOV(INDD(R10, 1), R2); // Parameters copied. the new env is at 1.
MOV(INDD(R10, IMM(2)), LABEL(LabelClosureBody6)); // Append the body
MOV(R0, R10);
JUMP(LabelClosureEnd6);
LabelClosureBody6:
PUSH(FP);
MOV(FP, SP);
/* -- createLambdaSimpleBody -- */
MOV(R1, FPARG(1));
CMP(R1, IMM(2));
JUMP_NE(ERROR);
/* CodeGen:*/
/* - If Expression - */


/* ---------------------------------------------- */
/*                  Applic Code: */
/* ---------------------------------------------- */
/* Compiled params, in reverse order: */


/* ---------------------------------------------- */
/*                  Applic Code: */
/* ---------------------------------------------- */
/* Compiled params, in reverse order: */
/* --- P-Var: --- */
MOV(R0, FPARG(3));

PUSH(R0);
PUSH(IMM(1)) // Push Num of args;

/* The Compiled Function: */
/* --- F-Var: --- */
MOV(R1, IMM(616)); // Value of Free var bucket.Address
MOV(R2,INDD(R1,0));
MOV(R0,R2);
CMP(INDD(R0,0), IMM(T_CLOSURE));
JUMP_NE(ERROR);
PUSH(INDD(R0, IMM(1)));
CALLA(INDD(R0, IMM(2)));
MOV(R5,STARG(IMM(0))) // R5 = Number of args to drop;
ADD(R5, IMM(2)) // R5 = R5 + env + numOfArgs;
DROP(R5);

PUSH(R0);
PUSH(IMM(1)) // Push Num of args;

/* The Compiled Function: */
/* --- F-Var: --- */
MOV(R1, IMM(701)); // Value of Free var bucket.Address
MOV(R2,INDD(R1,0));
MOV(R0,R2);
CMP(INDD(R0,0), IMM(T_CLOSURE));
JUMP_NE(ERROR);
PUSH(INDD(R0, IMM(1)));
CALLA(INDD(R0, IMM(2)));
MOV(R5,STARG(IMM(0))) // R5 = Number of args to drop;
ADD(R5, IMM(2)) // R5 = R5 + env + numOfArgs;
DROP(R5);

CMP(R0, FALSE);
JUMP_EQ(LabelIf3Else1);
/* In constants .. */
MOV(R0,IMM(2));
JUMP(LabelIf3Exit1);
LabelIf3Else1:


/* ---------------------------------------------- */
/*                  Tail Applic Code: */
/* ---------------------------------------------- */


/* ---------------------------------------------- */
/*                  Applic Code: */
/* ---------------------------------------------- */
/* Compiled params, in reverse order: */


/* ---------------------------------------------- */
/*                  Applic Code: */
/* ---------------------------------------------- */
/* Compiled params, in reverse order: */
/* --- P-Var: --- */
MOV(R0, FPARG(3));

PUSH(R0);
/* --- F-Var: --- */
MOV(R1, IMM(611)); // Value of Free var bucket.Address
MOV(R2,INDD(R1,0));
MOV(R0,R2);

PUSH(R0);
PUSH(IMM(2)) // Push Num of args;

/* The Compiled Function: */
/* --- B-Var: --- */
MOV(R1,FPARG(LOC_ENV));
MOV(R2,INDD(R1,IMM(1)));
MOV(R3,INDD(R2,IMM(0)));
MOV(R0,R3);
CMP(INDD(R0,0), IMM(T_CLOSURE));
JUMP_NE(ERROR);
PUSH(INDD(R0, IMM(1)));
CALLA(INDD(R0, IMM(2)));
MOV(R5,STARG(IMM(0))) // R5 = Number of args to drop;
ADD(R5, IMM(2)) // R5 = R5 + env + numOfArgs;
DROP(R5);

PUSH(R0);
/* --- P-Var: --- */
MOV(R0, FPARG(2));

PUSH(R0);
PUSH(IMM(2)) // Push Num of args;

/* The Compiled Function: */
/* --- B-Var: --- */
MOV(R1,FPARG(LOC_ENV));
MOV(R2,INDD(R1,IMM(0)));
MOV(R3,INDD(R2,IMM(0)));
MOV(R0,R3);
CMP(INDD(R0,0), IMM(T_CLOSURE));
JUMP_NE(ERROR);
PUSH(INDD(R0, IMM(1)));
CALLA(INDD(R0, IMM(2)));
MOV(R5,STARG(IMM(0))) // R5 = Number of args to drop;
ADD(R5, IMM(2)) // R5 = R5 + env + numOfArgs;
DROP(R5);

PUSH(R0);


/* ---------------------------------------------- */
/*                  Applic Code: */
/* ---------------------------------------------- */
/* Compiled params, in reverse order: */


/* ---------------------------------------------- */
/*                  Applic Code: */
/* ---------------------------------------------- */
/* Compiled params, in reverse order: */
/* --- P-Var: --- */
MOV(R0, FPARG(3));

PUSH(R0);
/* --- F-Var: --- */
MOV(R1, IMM(616)); // Value of Free var bucket.Address
MOV(R2,INDD(R1,0));
MOV(R0,R2);

PUSH(R0);
PUSH(IMM(2)) // Push Num of args;

/* The Compiled Function: */
/* --- B-Var: --- */
MOV(R1,FPARG(LOC_ENV));
MOV(R2,INDD(R1,IMM(1)));
MOV(R3,INDD(R2,IMM(0)));
MOV(R0,R3);
CMP(INDD(R0,0), IMM(T_CLOSURE));
JUMP_NE(ERROR);
PUSH(INDD(R0, IMM(1)));
CALLA(INDD(R0, IMM(2)));
MOV(R5,STARG(IMM(0))) // R5 = Number of args to drop;
ADD(R5, IMM(2)) // R5 = R5 + env + numOfArgs;
DROP(R5);

PUSH(R0);
/* --- P-Var: --- */
MOV(R0, FPARG(2));

PUSH(R0);
PUSH(IMM(2)) // Push Num of args;

/* The Compiled Function: */
/* --- F-Var: --- */
MOV(R1, IMM(586)); // Value of Free var bucket.Address
MOV(R2,INDD(R1,0));
MOV(R0,R2);
CMP(INDD(R0,0), IMM(T_CLOSURE));
JUMP_NE(ERROR);
PUSH(INDD(R0, IMM(1)));
CALLA(INDD(R0, IMM(2)));
MOV(R5,STARG(IMM(0))) // R5 = Number of args to drop;
ADD(R5, IMM(2)) // R5 = R5 + env + numOfArgs;
DROP(R5);

PUSH(R0);
 // Compile params and push (in reverse).
/* push number of args. */
PUSH(IMM(2));
/* Compile function and add it's code: */
/* --- F-Var: --- */
MOV(R1, IMM(621)); // Value of Free var bucket.Address
MOV(R2,INDD(R1,0));
MOV(R0,R2);
CMP(INDD(R0,0), IMM(T_CLOSURE)); // Check for errors
JUMP_NE(ERROR);
PUSH(INDD(R0,1)); // Push Environment
PUSH(FPARG(-1)); // Push Ret addr (from current frame)
MOV(R4, IMM(0)); // R4 will be the index
MOV(R6, IMM(3)); // R6 = Old STARG.offset
MOV(R8,FPARG(-2)); // R8 = old FP
MOV(R12,FPARG(1)); // R12 = Old argsCount
MOV(R13,STARG(1)); // R13 = New argsCount
MOV(R5, R12); // R5 = Old FPARG.offset
ADD(R5, IMM(1));
LabelTailLoop4:
CMP(R4, IMM(5));
JUMP_EQ(LabelTailExit4);
MOV(FPARG(R5), STARG(R6));
ADD(R4, IMM(1));
SUB(R5, IMM(1));
SUB(R6, IMM(1));
JUMP(LabelTailLoop4);
LabelTailExit4:
MOV(R9, R13);
SUB(R9, IMM(1));
SUB(R9, R12);
MOV(SP, FP);
ADD(SP, R9);
MOV(FP, R8);
JUMPA(INDD(R0, 2));

LabelIf3Exit1:
/* CodeGen-End*/

POP(FP);
RETURN;
LabelClosureEnd6:
/* CodeGen-End*/

POP(FP);
RETURN;
LabelClosureEnd5:

PUSH(R0);
PUSH(IMM(1)) // Push Num of args;

/* The Compiled Function: */
/* --- B-Var: --- */
MOV(R1,FPARG(LOC_ENV));
MOV(R2,INDD(R1,IMM(0)));
MOV(R3,INDD(R2,IMM(0)));
MOV(R0,R3);
CMP(INDD(R0,0), IMM(T_CLOSURE));
JUMP_NE(ERROR);
PUSH(INDD(R0, IMM(1)));
CALLA(INDD(R0, IMM(2)));
MOV(R5,STARG(IMM(0))) // R5 = Number of args to drop;
ADD(R5, IMM(2)) // R5 = R5 + env + numOfArgs;
DROP(R5);

PUSH(R0);
 // Compile params and push (in reverse).
/* push number of args. */
PUSH(IMM(1));
/* Compile function and add it's code: */


/* ---------------------------------------------- */
/*               Lambda Code: */
/* ---------------------------------------------- */
/* Malloc 3 for: closure, env and the body. */
PUSH(IMM(3));
CALL(MALLOC);
DROP(IMM(1));

MOV(R10,R0); /* R10 holds Addr of malloc */
MOV(INDD(R10,0), IMM(T_CLOSURE)); /* set T_Closure to location 0 */
/* Malloc(env.size()+1): */
PUSH(IMM(3));
CALL(MALLOC);
DROP(IMM(1));
MOV(R2,R0); /* R2 -> new env addr */
MOV(R3, FPARG(0)); /* R3 = old env adress */
/*Clone the new environment:
for (i = 1, j = 0; j < 2; j++, i++) /* R4 = i, R5 = jMOV(INDD(R2, IMM(i)), INDD(R3, IMM(j)) */;
MOV(R4, IMM(1));
MOV(R5, IMM(0));
LabelEnvLoop3:
CMP(R5,IMM(2));
JUMP_GE(LabelEnvLoopExit3);
MOV(INDD(R2, R4), INDD(R3, R5));
INCR(R4);
INCR(R5);
JUMP(LabelEnvLoop3);
LabelEnvLoopExit3: 
/* Clone the parameters (If needed) - Malloc(params.length): ... */
PUSH(IMM(1));
CALL(MALLOC);
DROP(IMM(1));

MOV(R3, R0); // R3 -> params.addr.. 
/* Loop through parameters and clone them (R5 = 2, R6 is the loop counter): */
MOV(INDD(R2,0), R3);
MOV(R5, IMM(2));
MOV(R6, IMM(0));
Labelparamsoop3:
CMP(R5,IMM(3));
JUMP_GE(LabelparamsoopExit3);
MOV(INDD(R3, R6), FPARG(R5));
//R2[0] -> new parameters
INCR(R5);
INCR(R6);
JUMP(Labelparamsoop3);
LabelparamsoopExit3: 
MOV(INDD(R10, 1), R2); // Parameters copied. the new env is at 1.
MOV(INDD(R10, IMM(2)), LABEL(LabelClosureBody3)); // Append the body
MOV(R0, R10);
JUMP(LabelClosureEnd3);
LabelClosureBody3:
PUSH(FP);
MOV(FP, SP);
/* -- createLambdaSimpleBody -- */
MOV(R1, FPARG(1));
CMP(R1, IMM(1));
JUMP_NE(ERROR);
/* CodeGen:*/


/* ---------------------------------------------- */
/*               Lambda Code: */
/* ---------------------------------------------- */
/* Malloc 3 for: closure, env and the body. */
PUSH(IMM(3));
CALL(MALLOC);
DROP(IMM(1));

MOV(R10,R0); /* R10 holds Addr of malloc */
MOV(INDD(R10,0), IMM(T_CLOSURE)); /* set T_Closure to location 0 */
/* Malloc(env.size()+1): */
PUSH(IMM(4));
CALL(MALLOC);
DROP(IMM(1));
MOV(R2,R0); /* R2 -> new env addr */
MOV(R3, FPARG(0)); /* R3 = old env adress */
/*Clone the new environment:
for (i = 1, j = 0; j < 3; j++, i++) /* R4 = i, R5 = jMOV(INDD(R2, IMM(i)), INDD(R3, IMM(j)) */;
MOV(R4, IMM(1));
MOV(R5, IMM(0));
LabelEnvLoop4:
CMP(R5,IMM(3));
JUMP_GE(LabelEnvLoopExit4);
MOV(INDD(R2, R4), INDD(R3, R5));
INCR(R4);
INCR(R5);
JUMP(LabelEnvLoop4);
LabelEnvLoopExit4: 
/* Clone the parameters (If needed) - Malloc(params.length): ... */
PUSH(IMM(1));
CALL(MALLOC);
DROP(IMM(1));

MOV(R3, R0); // R3 -> params.addr.. 
/* Loop through parameters and clone them (R5 = 2, R6 is the loop counter): */
MOV(INDD(R2,0), R3);
MOV(R5, IMM(2));
MOV(R6, IMM(0));
Labelparamsoop4:
CMP(R5,IMM(3));
JUMP_GE(LabelparamsoopExit4);
MOV(INDD(R3, R6), FPARG(R5));
//R2[0] -> new parameters
INCR(R5);
INCR(R6);
JUMP(Labelparamsoop4);
LabelparamsoopExit4: 
MOV(INDD(R10, 1), R2); // Parameters copied. the new env is at 1.
MOV(INDD(R10, IMM(2)), LABEL(LabelClosureBody4)); // Append the body
MOV(R0, R10);
JUMP(LabelClosureEnd4);
LabelClosureBody4:
PUSH(FP);
MOV(FP, SP);
/* - LabmdaOpt-Body: -*/
POP(R1);  // Old FP
POP(R2);  // Return addr
POP(R3);  // Env
POP(R4);  // args count
PUSH(IMM(1));
CALL(MALLOC);
DROP(IMM(1));
MOV(R6,IMM(0));
MOV(R5,R0);
LabelOptCopy1:
CMP(R6, IMM(1));
JUMP_EQ(LabelOptCopyExit1);
POP(R7);
MOV(INDD(R5,R6), R7);
ADD(R6, IMM(1));
JUMP(LabelOptCopy1);
LabelOptCopyExit1:
MOV(R7, R4);
SUB(R7, IMM(1));
PUSH(R7);
PUSH(IMM(0));
CALL(LIST);
DROP(IMM(1));
POP(R7);
DROP(R7);
MOV(R8, R0);
/* - Inserting to stack - */
PUSH(R8);
MOV(R6, IMM(0));
LabelOptCopy21:
CMP(R6, IMM(-1));
JUMP_EQ(LabelOptCopy2Exit1);
PUSH(INDD(R5,R6));
SUB(R6, IMM(1));
JUMP(LabelOptCopy21);
LabelOptCopy2Exit1:
PUSH(IMM(2));
PUSH(R3);
PUSH(R2);
PUSH(R1);
MOV(FP, SP);


/* ---------------------------------------------- */
/*                  Tail Applic Code: */
/* ---------------------------------------------- */
/* --- P-Var: --- */
MOV(R0, FPARG(3));

PUSH(R0);
/* --- P-Var: --- */
MOV(R0, FPARG(2));

PUSH(R0);
 // Compile params and push (in reverse).
/* push number of args. */
PUSH(IMM(2));
/* Compile function and add it's code: */
/* --- B-Var: --- */
MOV(R1,FPARG(LOC_ENV));
MOV(R2,INDD(R1,IMM(0)));
MOV(R3,INDD(R2,IMM(0)));
MOV(R0,R3);
CMP(INDD(R0,0), IMM(T_CLOSURE)); // Check for errors
JUMP_NE(ERROR);
PUSH(INDD(R0,1)); // Push Environment
PUSH(FPARG(-1)); // Push Ret addr (from current frame)
MOV(R4, IMM(0)); // R4 will be the index
MOV(R6, IMM(3)); // R6 = Old STARG.offset
MOV(R8,FPARG(-2)); // R8 = old FP
MOV(R12,FPARG(1)); // R12 = Old argsCount
MOV(R13,STARG(1)); // R13 = New argsCount
MOV(R5, R12); // R5 = Old FPARG.offset
ADD(R5, IMM(1));
LabelTailLoop3:
CMP(R4, IMM(5));
JUMP_EQ(LabelTailExit3);
MOV(FPARG(R5), STARG(R6));
ADD(R4, IMM(1));
SUB(R5, IMM(1));
SUB(R6, IMM(1));
JUMP(LabelTailLoop3);
LabelTailExit3:
MOV(R9, R13);
SUB(R9, IMM(1));
SUB(R9, R12);
MOV(SP, FP);
ADD(SP, R9);
MOV(FP, R8);
JUMPA(INDD(R0, 2));

POP(FP);
RETURN;
LabelClosureEnd4:
/* CodeGen-End*/

POP(FP);
RETURN;
LabelClosureEnd3:
CMP(INDD(R0,0), IMM(T_CLOSURE)); // Check for errors
JUMP_NE(ERROR);
PUSH(INDD(R0,1)); // Push Environment
PUSH(FPARG(-1)); // Push Ret addr (from current frame)
MOV(R4, IMM(0)); // R4 will be the index
MOV(R6, IMM(2)); // R6 = Old STARG.offset
MOV(R8,FPARG(-2)); // R8 = old FP
MOV(R12,FPARG(1)); // R12 = Old argsCount
MOV(R13,STARG(1)); // R13 = New argsCount
MOV(R5, R12); // R5 = Old FPARG.offset
ADD(R5, IMM(1));
LabelTailLoop2:
CMP(R4, IMM(4));
JUMP_EQ(LabelTailExit2);
MOV(FPARG(R5), STARG(R6));
ADD(R4, IMM(1));
SUB(R5, IMM(1));
SUB(R6, IMM(1));
JUMP(LabelTailLoop2);
LabelTailExit2:
MOV(R9, R13);
SUB(R9, IMM(1));
SUB(R9, R12);
MOV(SP, FP);
ADD(SP, R9);
MOV(FP, R8);
JUMPA(INDD(R0, 2));
/* CodeGen-End*/

POP(FP);
RETURN;
LabelClosureEnd2:
CMP(INDD(R0,0), IMM(T_CLOSURE)); // Check for errors
JUMP_NE(ERROR);
PUSH(INDD(R0,1)); // Push Environment
PUSH(FPARG(-1)); // Push Ret addr (from current frame)
MOV(R4, IMM(0)); // R4 will be the index
MOV(R6, IMM(2)); // R6 = Old STARG.offset
MOV(R8,FPARG(-2)); // R8 = old FP
MOV(R12,FPARG(1)); // R12 = Old argsCount
MOV(R13,STARG(1)); // R13 = New argsCount
MOV(R5, R12); // R5 = Old FPARG.offset
ADD(R5, IMM(1));
LabelTailLoop1:
CMP(R4, IMM(4));
JUMP_EQ(LabelTailExit1);
MOV(FPARG(R5), STARG(R6));
ADD(R4, IMM(1));
SUB(R5, IMM(1));
SUB(R6, IMM(1));
JUMP(LabelTailLoop1);
LabelTailExit1:
MOV(R9, R13);
SUB(R9, IMM(1));
SUB(R9, R12);
MOV(SP, FP);
ADD(SP, R9);
MOV(FP, R8);
JUMPA(INDD(R0, 2));
/* CodeGen-End*/

POP(FP);
RETURN;
LabelClosureEnd1:
CMP(INDD(R0,0), IMM(T_CLOSURE));
JUMP_NE(ERROR);
PUSH(INDD(R0, IMM(1)));
CALLA(INDD(R0, IMM(2)));
MOV(R5,STARG(IMM(0))) // R5 = Number of args to drop;
ADD(R5, IMM(2)) // R5 = R5 + env + numOfArgs;
DROP(R5);

MOV(ADDR(496), R0);
MOV(R0, SOB_VOID);


CALL(PRINT_R0_VALUE);





/* ---------------------------------------------- */
/*                  Applic Code: */
/* ---------------------------------------------- */
/* Compiled params, in reverse order: */
/* In constants .. */
MOV(R0,IMM(782));
PUSH(R0);
/* In constants .. */
MOV(R0,IMM(487));
PUSH(R0);
PUSH(IMM(2)) // Push Num of args;

/* The Compiled Function: */
/* --- F-Var: --- */
MOV(R1, IMM(566)); // Value of Free var bucket.Address
MOV(R2,INDD(R1,0));
MOV(R0,R2);
CMP(INDD(R0,0), IMM(T_CLOSURE));
JUMP_NE(ERROR);
PUSH(INDD(R0, IMM(1)));
CALLA(INDD(R0, IMM(2)));
MOV(R5,STARG(IMM(0))) // R5 = Number of args to drop;
ADD(R5, IMM(2)) // R5 = R5 + env + numOfArgs;
DROP(R5);


CALL(PRINT_R0_VALUE);

POP(FP);
DROP(IMM(3));
PROG_ENDING:
STOP_MACHINE;
return 0;
}
