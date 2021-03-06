/*
 This file is part of MechCAM.

 MechCAM is free software: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 3 of the License, or
 (at your option) any later version.

 MechCAM is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.

 You should have received a copy of the GNU General Public License
 along with MechCAM.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef TYPES_H
#define TYPES_H

enum {
	UnknownType,
	DocumentType,
	PointType,
	LineType,
	ArcType,
	CircleType,
	GripperType,
	VertexType,
	EdgeType,
	FaceType,
	LoopType,
	SolidType,
	StlSolidType,
	WireType,
	SketchType,
	ImageType,
	CoordinateSystemType,
	TextType,
	DimensionType,
	RulerType,
	XmlType,
	EllipseType,
	SplineType,
	GroupType,
	CorrelationToolType,
	ConstraintType,
	PadType,
	PartType,
	PocketSolidType,
	AngularDimensionType,
	OrientationModifierType,
	HoleType,
	HolePositionsType,
	GearType,
	CubeType,
	ShellMillType,
	BallNoseEndMillType,
	CornerRadiusEndMillType,
	CornerRoundingEndMillType,
	DrillPointEndMillType,
	DrillTapType,
	RoughingEndMillType,
	SquareEndMillType,
	TapType,
	ThreadMillType,
	FaceMillType,
	SlabMillType,
	FlyCutterType,
	DoveTailCutterType,
	WoodruffCUtterType,
	HobType,
	HollowMillType,
	ObjectMaximumType
};

#endif // TYPES_H
